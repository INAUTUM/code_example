def perevod(n, base):
    alf = '0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ'
    ans = ''
    while n > 0:
        n, y = divmod(n, base) # n // base, n % base
        ans = alf[y] + ans
    return ans

def obratno2(n, base):
    alf = '0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ'
    n = str(n)
    ans = 0
    for i in n:
        u = alf.index(i)
        if u > base:
            return 0
        ans = ans * base + u
    return ans

def obratno3(n, base):
    alf = '0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ'
    n = str(n)
    ans = 0
    m = []
    for i in n:
        u = alf.index(i)
        if u > base:
            return 0
        m.append(u)
    m = m[::-1]
    print(m)
    for i in range(len(m)):
        ans += base ** i * m[i]
    return ans
print(obratno3(111000, 2))
