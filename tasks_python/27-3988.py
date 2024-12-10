f = open('27-3988a.txt')
n = f.readline()
print(n)
sum1 = 0
sum2 = 0
mas1 = []
mas2 = []
maxx = 0
minn = 0
for i in range(int(n)):
    j, k = map(int, f.readline().split())
    maxx = max(j, k)
    minn = min(j, k)
    if k % 2 > 0:
        sum1 += maxx
        sum2 += minn
        mas1.append(maxx)
        mas2.append(minn)
print(mas1)
print(mas2)
print(sum1)
print(sum2)
if sum1 % 2 == 0 and sum2 % 2 > 0: print(sum1 + sum2)
else:
    mas3 = []
    for i in range(len(mas1)):
        if (sum1 - mas1[i]) % 2 == 0 and (sum2 - mas2[i]) % 2 > 0: mas3.append(((sum1 - mas1[i]) + sum2 - mas2[i]))
    mas3.sort()
    print(mas3[-1])
