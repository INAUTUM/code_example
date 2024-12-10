for x in range(1, 10000000):
    i = x
    a = 0
    b = 0
    while x > 0:
        c=x %2
        if c == 0:
            a=a+1
        else:
            b =b +1
        x = x // 10
    if a == 4 and b == 0:
        print(i)
        break
