n = int(input())
mas1 = []
mas2 = []

for i in str(n):
    mas1.append(i)
print(mas1)

mas1 = mas1[::-1]
d = 0
def f(i):
    if i == '1':
        mas2.append("один доллар")
    elif i == '2':
        mas2.append('два доллара')
    elif i == '3':
        mas2.append('три доллара')
    elif i == '4':
        mas2.append('четыре доллара')
    elif i == '5':
        mas2.append('пять долларов')
    elif i == '6':
        mas2.append('шесть долларов')
    elif i == '7':
        mas2.append('семь долларов')
    elif i == '8':
        mas2.append('восемь долларов')
    elif i == '9':
        mas2.append('девять долларов')
    elif i == '0':
        mas2.append('долларов')
