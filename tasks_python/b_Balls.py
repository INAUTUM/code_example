def f(lp):
    global k
    mas2 = mas1
    if lp > 0 and len(mas2[lp]) >= 2:
        io = mas2[lp]
        mas2.pop(lp)
        for p in range(lp, -1, -1):
            if p - 1 >= 0:
                if mas2[p][0] == mas2[p - 1][0]:
                    k = ''.join(mas2[p])
                    k += ''.join(mas2[p - 1])
                    if len(k) >= 3:
                        mas2.pop(p)
                        mas2.pop(p - 1)
                        if len(mas2) == 0:
                            print(len(io) + 1)
                            return 0
                        else:
                            if lp - 1 == 0:
                                print(0)
                                return 0
        print(0)
        return 0
    else:
        if set(mas2[lp]) == 1 and lp == 0 and len(mas[lp]) >= 2:
            print(len(mas[lp]) + 1)
            return 0
        else:
            print(0)
            return 0
                

            

            
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

if len(mas2) > 2 or (len(mas2) == 1 and len(mas) >= 2):
    lp = len(mas2) // 2
    if lp > 0 and len(mas2[lp]) >= 2:
        io = mas2[lp]
        mas2.pop(lp)
        for p in range(lp, -1, -1):
            if p - 1 >= 0:
                if mas2[p][0] == mas2[p - 1][0]:
                    if len(mas2[p]) + len(mas2[p - 1]) >= 3:
                        mas2.pop(p)
                        mas2.pop(p - 1)
                        if len(mas2) == 0:
                            print(len(io) + 1)
                            break
                        else:
                            if lp - 1 == 0:
                                print(0)
                                break
                else:
                    print(0)
                    break
            else:
                print(0)
                break
    else:
        if set(mas2[lp]) == 1 and lp == 0 and len(mas[lp]) >= 2:
            print(len(mas[lp]) + 1)
        else:
            print(0)


else:
    print(0)