f = open('27-2694b.txt')
n = int(f.readline())
m = []
sum = 0
for i in range(n):
    mas = []
    a, b, c = map(int, f.readline().split())
    mas.append(a)
    mas.append(b)
    mas.append(c)
    mas.sort()
    min1 = mas[0]
    min2 = mas[1]
    p = min1 + min2
    sum += p
    if (min1 - mas[2]) % 6 != 0: m.append(min1 - mas[2])
    if (min2 - mas[2]) % 6 != 0: m.append(min2 - mas[2])
    print(mas)
print(sum)
m.sort()
m.reverse()
print(m)
if sum % 6 == 0: print(sum)
else:
    for i in m:
        if (sum + abs(i)) % 6 == 0: print(sum + abs(i)); break
