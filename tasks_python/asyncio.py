# some minor fixes added
import asyncio
import re
from itertools import chain

import aiohttp
from bs4 import BeautifulSoup


async def get_html_async(base_url):
    async with aiohttp.ClientSession(
        connector=aiohttp.TCPConnector(ssl=False) # I got ssl errors on my machine
    ) as client:
        async with client.get(base_url) as resp:
            return await resp.text() if (resp.status == 200) else ""


def get_links(html_page):
    soup = BeautifulSoup(html_page, "lxml")  # removed "html.parser"
    regex = r"(.nc$)|(/$)"
    links = [
        f"{base_url}{link.get('href')}"
        for link in soup.findAll("a", attrs={"href": re.compile(regex)})
    ]
    return links


def get_sub_dirs(links):
    sub_dirs = [link for link in links if re.search(r"/$", link)]
    return sub_dirs


def get_files(links):
    file_links = [link for link in links if re.search(r".nc$", link)]
    return file_links


async def main(base_url):
    files = []
    html_page = await get_html_async(base_url)
    links = get_links(html_page) # removed indexing 'html_page[0]'
    sub_dirs = get_sub_dirs(links)
    base_files = get_files(links)
    files.extend(base_files) # extend list to get "cleaner" output, keep using 'append' if your downstream code requires it

    coros = [main(sub) for sub in sub_dirs] # create all requests
    new_files = await asyncio.gather(*coros) #  run all requests concurrently
    files.extend(chain(*new_files)) # again, add to list as needed

    return files


# Run program
base_url = "https://mospolytech.ru"
files = asyncio.run(main(base_url)) # or simply 'await main(base_url)' in IPython
print(files)