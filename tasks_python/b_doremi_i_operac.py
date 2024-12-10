ko = int(input())
for kop in range(ko):
    n = int(input())
    mas = list(map(int, input().split()))
    l = mas[0]
    for i in range(1, n):
        m, p = l, mas[i]
        while(p):
            m, p = p, m % p
        l = m
        if l == 1:
            break
    print(mas[-1] // l)
        