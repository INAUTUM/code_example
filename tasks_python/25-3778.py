m = []
for i in range(1, 1000):
    t = True
    for b in range(2, int(i**0.5)+1):
        if i % b == 0:
            t = False
    if t == True:
        m.append(i)
print(m)
for x in m:
    for i in range(40):
        n = x**4 * 2**i
        if 105000000 <= n <= 115000000:
            print(n, x**4)
