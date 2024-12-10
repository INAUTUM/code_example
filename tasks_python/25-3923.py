for k in range(1000000, 10000000000000):
    n = k
    t = True
    m = []
    i = 2

    while t:
         if n % i == 0:
                m.append(i)
                m.append(n // i)
         if n // i == i + 1:
                 t = False
         i += 1
    if len(m) == 512:
        print(i)
        break
print('GOTOVO')
