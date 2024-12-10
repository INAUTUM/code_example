n = int(input())
m = [0] * n
for i in range(n):
    p = 0
    a = int(input())
    b = list(map(int, input().split()))
    m[i] = [m[i]] * a
    for k in range(len(b)):
        if b[k] not in m[i]:
            m[i][p] = b[k]
            p += 1

for i in range(len(m)):
    print(*m[i])