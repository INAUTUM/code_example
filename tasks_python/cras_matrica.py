mat = []
n = 0
p = 0
k = 0

for i in range(5):
    m = list(map(int, input().split()))
    if 1 in m:
        n = i
        p = m.index(1)
    mat.append(m)

while n != 2 or p != 2:
    if n != 2:
        if n > 2:
            n -= 1
        elif n < 2:
            n += 1
        k += 1
    if p != 2:
        if p > 2:
            p -= 1
        elif p < 2: 
            p += 1
        k += 1

print(k)