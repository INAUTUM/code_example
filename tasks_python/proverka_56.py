import subprocess
from tkinter import *
from tkinter import ttk

n = input()
if n == 'start':
    root = Tk()


    def Hello(event):
        cmd = 'python proverka.py'
        PIPE = subprocess.PIPE
        p = subprocess.Popen(cmd, shell=True)
        p.wait()


    print("process finished")

    btn = Button(root,  # roditelskoe okno
                text="XMS_to_XML_Units",  # nadpis na knopke
                width=30, height=5,  # wirina i visota
                bg="white", fg="black")  # tsvet fona i nadpisi
    # pri najatii LKM na knopku vizivaetsya funktsiya Hello
    btn.bind("<Button-1>", Hello)
    btn.pack()  # raspolojit knopku na glavnom okne
    root.mainloop()
