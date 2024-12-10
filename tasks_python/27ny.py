f = open('27ny.txt')
n = int(f.readline())
sum = 0
minn = 99999999999999999
mas = []
for i in range(n):
    a, b = map(int, f.readline().split())
    sum += min(a, b)
    d = abs(a - b)
    if d % 5 != 0:
        mas.append(abs(a - b))
mas.sort()
if sum % 5 == 0: print(sum)
else:
    for i in range(len(mas)):
        if (sum + mas[i]) % 5 == 0:
            print(sum + mas[i])
            break