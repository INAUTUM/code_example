# чтение пар из файла
data = open('26-k6.txt').read().split('\n')[1:-1]
data = list(map(lambda x: x.split(), data))
data = list(map(lambda x: (int(x[0]), int(x[1])), data))
# заносим все пары в словарь по типу: ряд - занятые места
ans = {}
for x in data:
    if x[0] in ans.keys():
        ans[x[0]].append(x[1])   # нашли ряд, добавили очередное занятое место
    else:
        ans[x[0]] = [x[1]]    # если ряд встретился первый раз, то положили в список занятое место
# пошли в словарь и отсортили занятые места
for x in ans.keys():
    ans[x] = sorted(ans[x])
    print(x, ans[x])
# пошли по словарю или глазами смотрите, ищите условие задачи.
