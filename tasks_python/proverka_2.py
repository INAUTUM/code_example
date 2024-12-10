from tkinter import*
import subprocess
root = Tk()


def Hello(event):
        cmd = 'python proverka.py'
        PIPE = subprocess.PIPE
        p = subprocess.Popen(cmd, shell=True)
        p.wait()
def iop(event):
     print(2)
def iop2(event):
   print(3)
btn = Button(root,  # roditelskoe okno
             text="hjhjhbj",  # nadpis na knopke
             width=30, height=5,  # wirina i visota
             bg="white", fg="black", relief=4)  # tsvet fona i nadpisi
    # pri najatii LKM na knopku vizivaetsya funktsiya Hello
btn.bind("<Button-1>", Hello)
btn.pack()  # raspolojit knopku na glavnom okne
btn1 = Button(root,  # roditelskoe okno
             text="bjkjbk",  # nadpis na knopke
             width=30, height=5,  # wirina i visota
             bg="white", fg="black")  # tsvet fona i nadpisi
    # pri najatii LKM na knopku vizivaetsya funktsiya Hello
btn1.bind("<Button-1>", iop)
btn1.pack()  # raspolojit knopku na glavnom okne
btn2 = Button(root,  # roditelskoe okno
             text="bjkbkjb",  # nadpis na knopke
             width=30, height=5,  # wirina i visota
             bg="white", fg="black")  # tsvet fona i nadpisi
# pri najatii LKM na knopku vizivaetsya funktsiya Hello
btn2.bind("<Button-1>", iop2)
btn2.pack()  # raspolojit knopku na glavnom okne
root.mainloop()
