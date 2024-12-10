n = int(input())
h = 0
for i in range(n):
    g = list(map(int, input().split()))
    if sum(g) >= 2:
        h += 1
print(h)