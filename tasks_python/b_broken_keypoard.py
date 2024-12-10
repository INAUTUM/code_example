for kop in range(int(input())):
    n = int(input())
    k = input()
    mas = []
    b = 0
    for i in range(len(k) - 1):
        if k[i] != k[i + 1]:
            mas.append(k[b:i + 1])
            b = i + 1
    mas.append(k[b:])
    t = True
    if len(mas[0]) == 1:
        for i in range(1, len(mas)):
            if i % 2 == 1 and len(mas[i]) == 2:
                continue   
            elif i % 2 == 0 and len(mas[i]) == 1:
                continue
            else:
                t = False
                break
        if t == True:
            print('YES')
        else:
            print('NO')
    else:
        print('NO')