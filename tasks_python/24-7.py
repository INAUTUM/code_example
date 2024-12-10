n = 13820
k = 0
m = []
l = open('24-7.txt').read().split()
l = list(map(int, l))
l.sort()
for i in l:
    if k < n:
        m.append(i)
        k += i
print(k)
print(l)
print(m)
print(len(m) - 1)
print(sum(m) - 32)
