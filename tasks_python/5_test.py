def ez(n):
    res = []
    for i in range(1, int(n ** 0.5)+2):
        if n % i == 0:
            res.append(i)
            if i*i != n:
                res.append(n//i)
    res.sort()
    return res

mas = []
for i in range(2, 2001):
    mas1 = ez(i)
    s = i
    print(i, mas1[-2::-1])
    for i in mas1[-2::-1]:
        if s - i > 0:
            s = s - i
        elif s - i == 0:
            mas.append(i)
            break
print(len(mas))