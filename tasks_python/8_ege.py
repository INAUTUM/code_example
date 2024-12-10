def F(n):
    global k
    if n == q:
        k += 1
    elif n < q:
        F(n+1)
        F(n*l)
def G(q):
    global o
    if q == 15:
        o += 1
    elif q < 15:
        G(q+1)
        G(q*l)
k = 0
q = 3
l = 2
F(1)
o = 0
G(3)
print(k*o)
