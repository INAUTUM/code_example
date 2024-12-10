f = open('jk.txt').read().split('\n')
for i in range(len(f)):
    f[i] = int(f[i])
f = sorted(f)
k = 0
p = 0
mas = []
while k < 8047:
    k += f[p]
    mas.append(f[p])
    p += 1
print(f)
print(k-29-29)
print(len(mas)-1)
print(mas)
