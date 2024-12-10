mas = [2]
for i in range(3, 1000):
    t = True
    for b in range(2, int(i ** 0.5) + 1):
        if i % b == 0:
            t = False
            break
    if t == True:
        mas.append(i)
print(mas)
for i in range(100):
    for b in mas:
        if 35000000 <= 2 ** i * b ** 4 <= 40000000:
            print(2 ** i * b ** 4)
