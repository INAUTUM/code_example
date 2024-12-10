f = open('24ny.txt').read()
alf = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
mas = [0] * len(alf)
for i in range(len(f) - 2):
    if f[i+1] == f[i + 2]:
        mas[alf.index(f[i])] += 1
print(alf[mas.index(max(mas))], max(mas))