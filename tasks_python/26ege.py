f = open('26ege.txt').read().split()
f = list(map(int, f[1:]))
mas_chet = []
mas_ne = []
mas = []
k = 0
j = 0
for i in f:
    if i % 2 == 0:
        mas_chet.append(i)
    else:
        mas_ne.append(i)
for i in range(len(mas_chet)):
    k = 0
    for b in range(len(mas_ne)):
        k = mas_chet[i] + mas_ne[b]
        if k in f:
            mas.append(k)
            j += 1
mas.sort()
print(j, mas[-1])
