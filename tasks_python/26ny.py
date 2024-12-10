f = open('26ny.txt').read().split()
f = list(map(int, f[1:]))
f.sort()
sum1 = 0
sum2 = 0
k = int(0.7 * len(f))
for i in range(k):
    sum1 += f[i] * 0.7
for i in range(k, len(f)):
    sum1 += f[i] * 0.6
print(sum1)
k2 = int(0.5 * len(f))
for i in range(k2):
    sum2 += f[i] * 0.6
for i in range(k2, len(f)):
    sum2 += f[i] * 0.65
print(sum2)

print(int(sum1 - sum2))
print(f[-1] * 0.65)
print(63 * 0.65)