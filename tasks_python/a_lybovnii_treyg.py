mas = list(input())
mas1 = mas.copy()
mas2 = []   
b = 0
k = ''
for i in range(len(mas) - 1):
    if mas[i] != mas[i + 1]:
        mas2.append(mas[b:i + 1])
        b = i + 1
mas2.append(mas[b:])
mas = mas1
y = True
if len(mas2) > 2 or (len(mas2) == 1 and len(mas) >= 2):
    lp = len(mas2) // 2
    if len(mas2) > 1:
        io = mas2[lp]
        mas2.pop(lp)
        if len(mas2) % 2 == 0 and len(io) >= 2:
            y = True
            while y == True:
                if mas2[-1][0] == mas2[0][0]:
                    if len(mas2[-1]) + len(mas2[0]) >= 3:
                        mas2.pop(-1)
                        mas2.pop(0)
                        if len(mas2) == 0:
                            print(len(io) + 1)
                            y = False
                    else:
                        print(0)
                        y = False
                else:
                    print(0)
                    y = False
        else:
            print(0)
    else:
        print(len(mas2[0]) + 1)
else:
    print(0)
