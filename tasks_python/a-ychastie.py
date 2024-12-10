a, b = map(int, input().split())
p = list(map(int, input().split()))
p = sorted(p)
p = p[::-1]
k = p[b-1]
o = 0
for i in range(a):
    if p[i] >= k and p[i] != 0:
        o += 1

print(o)