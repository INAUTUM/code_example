def f(a, k):
    if 80 < a < 90:
        k = 4000
    elif a > 80:
        k = 5000
    return k

def o(b, c):
    if b >= 5:
        c = 4500
    else:
        c = 0
    return c
a = int(input())
b = int(input())
k = 0
c = 0
if a < 80:
    print(0)
else:
    k = f(a, k)
    c = o(b, c)
    print(max(k, c))