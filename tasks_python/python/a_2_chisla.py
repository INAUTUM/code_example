for kop in range(int(input())):
    a, b = map(int, input().split())
    k = abs(a - b)
    n = 0
    for i in range(10, 0, -1):
        n += k // i
        if k // i == 0:
            continue
        k %= (i * (k // i))
    print(n)