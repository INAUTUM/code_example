a = 1008
t = True
for x in range(10000):
    if ((not(x % a == 0) or (x % 36 == 0 and x % 126 == 0)) and a > 1000) == False:
        t = False
        break
print(t)