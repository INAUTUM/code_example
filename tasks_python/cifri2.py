k = []
for i in range(3159, 31585):
    def f(n):
        global k
        if n % 2 == 0:
            return n == 2
        d = 3
        while d * d <= n and n % d != 0:
            d += 2
        if d * d > n:
            k.append(n)
    n = i
    f(n)
print(k)
print(sum(k))
