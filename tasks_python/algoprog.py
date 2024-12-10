n = int(input())
c = 0
j = 0
if n == 1:
    print(2)
else:
    while c != n:
        j += 1
        for i in range(2, int(j**0.5)+2):
            if j % i == 0:
                break
        else:
            c += 1
    print(j)
