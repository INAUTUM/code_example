l = 0
for i in range(9999935, 10000140):
    def IsPrime(n):
        d = 2
        while d * d <= n and n % d != 0:
            d += 1
        return d * d > n

    n = i
    
    if IsPrime(n) == True:
        l += 1
        print(i)
print(l)
