f = open('27-2661b.txt')
n = int(f.readline())
sum = 0
print(n)
maxx = 99999999999
for i in range(n):
    a, b = map(int, f.readline().split())
    sum += min(a, b)
    d = abs(a - b)
    if d % 3 != 0: maxx = min(d, maxx)
if sum % 3 != 0: print(sum)
else: print(sum + maxx)
