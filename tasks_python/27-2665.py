f = open('27-2665a.txt')
n = int(f.readline())
sum = 0
mas = []
print(n)
maxx = 99999999999
for i in range(n):
    a, b = map(int, f.readline().split())
    sum += min(a, b)
    if abs(a - b) % 5 != 0:
        mas.append(abs(a - b))
mas.sort()
if sum % 5 == 0: print(sum)
else:
    for i in range(len(mas)):
        if (sum + mas[i]) % 5 == 0: print(sum + mas[i]); break
