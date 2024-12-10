from tkinter import Menu, Frame, Label, Tk, W, N, E, LabelFrame, Button
from tkinter.ttk import Combobox
from tkinter import NE
root = Tk()
root.title("qwerty")
root.geometry("800x750")

main_menu = Menu()

label_frame = LabelFrame(root, text='Выбрать параметры')
label_frame.grid(row=0, column=0, sticky=N)



def bth():
    bottomframe.grid_forget()
    btn.config(text='Показать')
    btn.config(command=bth2)
    lebel_frame.config()


def bth2():
    bottomframe.grid()
    btn.config(text='Скрыть')
    btn.config(command=bth)


btn = Button(label_frame, text='Скрыть', command=bth)
btn.place(relx=1, rely=0, x=-5, y=-5, anchor=NE, bordermode="outside")

bottomframe = Frame(label_frame)
bottomframe.grid()



Label(bottomframe, text='Название').grid(row=0, sticky=W)
Label(bottomframe, text='Выбор').grid(row=0, column=1, sticky=W)
Label(bottomframe, text='A').grid(row=0, column=2, sticky=W)
Label(bottomframe, text='B').grid(row=0, column=3, sticky=W)

Label(bottomframe, text='Название 1').grid(row=1, sticky=W)
Label(bottomframe, text='Название 2').grid(row=2, sticky=W)
Label(bottomframe, text='Название 3').grid(row=3, sticky=W)
Label(bottomframe, text='Название 4').grid(row=4, sticky=W)

combo = Combobox(bottomframe)
combo['values'] = (1, 2, 3, 4, 5)
combo.current(0)
combo.grid(column=1, row=1)

combo2 = Combobox(bottomframe)
combo2['values'] = ('a', 'b', 'c', 'd', 'e')
combo2.current(0)
combo2.grid(column=1, row=2)

combo3 = Combobox(bottomframe)
combo3['values'] = ('a', 'b', 'c', 'd', 'e')
combo3.current(0)
combo3.grid(column=1, row=3)

combo4 = Combobox(bottomframe)
combo4['values'] = ('a', 'b', 'c', 'd', 'e')
combo4.current(0)
combo4.grid(column=1, row=4)


Label(bottomframe, text='value_1_1').grid(row=1, column=2, sticky=W)
Label(bottomframe, text='value_1_2').grid(row=1, column=3, sticky=W)
Label(bottomframe, text='value_2_1').grid(row=2, column=2, sticky=W)
Label(bottomframe, text='value_2_2').grid(row=2, column=3, sticky=W)
Label(bottomframe, text='value_3_1').grid(row=3, column=2, sticky=W)
Label(bottomframe, text='value_3_2').grid(row=3, column=3, sticky=W)
Label(bottomframe, text='value_4_1').grid(row=4, column=2, sticky=W)
Label(bottomframe, text='value_4_2').grid(row=4, column=3, sticky=W)


root.config(menu=main_menu)

root.mainloop()
