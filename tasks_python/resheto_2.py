def g(i, o):
    global k
    if i == o:
        k += 1
    elif i < o:
        g(i + 1, o)
        g(i + 2, o)
        g(3 * i, o)
def f(n, end):
    global p
    if n == 11 or n == 18 or n > end:
        return 0
    if n == end:
        p += 1
    elif n < 23:
        f(n + 1, end)
        f(n + 2, end)
        f(3 * n, end)
k = 0
p = 0
g(4, 8)
f(8, 23)
print(k * p)
