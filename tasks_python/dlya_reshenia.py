k = 0
for i in range(2031, 14313):
    def f(n, base):
        if not hasattr(f, 'table'):
            f.table = '0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ'
        x, y = n // base, n % base #divmod(x, base)
        return f(x, base) + f.table[y] if x else f.table[y]
    base = 11
    n = i
    u = f(n, base)
    if str(u).count('2') == 0:
        k += 1
print(k)
