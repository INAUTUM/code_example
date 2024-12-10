f = open('26-7.txt').read()
k = 0
m = []
p = ''
g = []
for i in range(len(f)-1):
    if f[i] != 'F' and f[i] != 'C':
        k += 1
        p += f[i]
    else:
        m.append(k)
        g.append(p)
        p = ''
        k = 0
print(m)
print(g)
m.sort()
print(m[-1])
