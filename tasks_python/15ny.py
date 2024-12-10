for a in range(1001, 10000):
    t = True
    for x in range(10000):
        if ((not(x % a == 0) or (x % 36 == 0 and x % 136 == 0)) and a > 1000) == False:
            t = False
            break
    if t == True:
        print(a)