n = int(input())
m = [True] * n
for i in range(2, int(n**0.5) + 2):
    if m[i]:
        for j in range(i**2, n, i):
            m[j] = False
print(m)
