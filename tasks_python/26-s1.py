f = open('26-s1.txt').read().split()[1:]
f = list(map(int, f))
f.sort()

k = []
for i in f:
    if i <= 150:
        k.append(i)
print(k)

mas = []
for i in f:
    if i > 150:
        mas.append(i)
mas.sort()
print(mas)
print(len(mas))
mas1 = mas[len(mas) // 2:]
print(mas1)
print(len(mas1))
mas2 = mas[:len(mas) // 2]
print(mas2)
print(len(mas2))

mas3 = []
for i in range(len(mas2)):
    mas3.append(mas1[i])
    mas3.append(mas2[i])
mas3.append(mas1[-1])
print(mas3)
ans = sum(k)
print(ans)
for i in range(len(mas3)):
    if (i + 1) % 2 == 0:
        ans += mas3[i] * 0.8
    else:
        ans += mas3[i]

print(ans)