def f(i):
    global c
    if mas[0][i] == 1:
        c += 1
        mas[0][i] = 2
    else:
        if len(mas[1]) - 1 >= i + 2:
            return f1(i + 2)

def f1(i):
    global c
    if mas[0][i] == 1:
        c += 1
        mas[0][i] = 2


o = int(input())
for lp in range(o):
    n = int(input())
    mas = []
    mas1 = []
    for i in range(2):
        g = input()
        for b in range(len(g)):
            mas1.append(int(g[b]))
        mas.append(mas1)
        mas1 = []
    c = 0
    
    for i in range(len(mas[1])):
        if mas[1][i] == 1:
            if mas[0][i] == 0:
                c += 1
            else:
                if i - 1 >= 0:
                        f(i - 1)
                else:
                    if len(mas[1]) - 1 >= i + 1:
                        f1(i + 1)
    print(c)