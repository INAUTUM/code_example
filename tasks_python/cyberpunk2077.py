k = []
for b in range(27, 90001):
    mas = []
    i = b
    mas.append(i)
    while i < 900000:
        i *= 2
        mas.append(i)
    mas = mas[:-1]
    l = []
    for i in mas:
        l.append(str(i))
    for i in l:
        if len(i) == len(set(i)):
            k.append(int(i))
print(k)
k = sorted(k)
print(k)
print(len(k))
