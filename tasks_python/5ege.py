l = 0
mas = []
mas1 = []
mas1 = []
for i in range(174457, 174505):
    mas = []
    t = True
    for b in range(2, int(i ** 0.5) + 1):
        if i % b == 0:
            mas.append(b)
            if i % (i // b) == 0:
                mas.append(i // b)
        if len(mas) > 2:
            t = False
            break
    if t == True and len(mas) == 2:
        print(mas[0], mas[1], mas[0] * mas[1])
        mas1.append(mas[0] * mas[1])

mas1.sort()
print(mas1)
