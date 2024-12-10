f = open('27-7b.txt')
n = int(f.readline())
sum = 0
maxx = 99999999999
mas = []
for i in range(n):
    a, b, c = map(int, f.readline().split())
    m = max(a, b, c)
    sum += m
    for x in a, b, c:
        if (m - x) % 8 != 0:
            maxx = m - x
            mas.append(maxx)

mas.sort()
if sum % 8 == 0: print(sum)
else:
    for i in mas:
        if (sum - abs(i)) % 8 == 0: print(sum - abs(i)); break
