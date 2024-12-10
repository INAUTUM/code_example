def prost(n):
    f = True
    k = 0
    for d in range(2, n):
        if n % d == 0:
            f = False
            break
    return n

def F(n):
    global k, x
    if n == x:
        k += 1
    elif n < x:
        F(n + 2)
        n += 1
        while prost(n) != True:
            n += 1
        print(n)
        F(n)
k = 0
x = 45
F(2)

p = k
k = 0
x = 14
F(2)

m = k
k = 0
x = 33
F(14)

l = k
k = 0
x = 45
F(33)
print(p * (m - l * k))
