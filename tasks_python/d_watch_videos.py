n, m = map(int, input().split())
mas = list(map(int, input().split()))
mas = sorted(mas)
sum = mas[0]
mas1 = []
mas2 = []
i = len(mas) - 1

if n > 1:
    while True:
        if mas[0] + mas[i] <= m:
            mas1.append([mas[i], mas[0]])
            mas.pop(i)
            mas.pop(0)
            i = len(mas) - 1
            if i <= 0 or len(mas) <= 1:
                break
        else:
            if i - 1 <= 0 or len(mas) <= 1:
                break
            i -= 1

if len(mas) > 0:
    for i in range(len(mas)):
        mas2.append(mas[i])

time = 0
if len(mas1) != 0:
    for i in range(len(mas1)):
        for b in range(len(mas1[i])):
            time += mas1[i][b]
        time += 1

    for i in range(len(mas1) - 1):
        if mas1[i][1] + mas1[i + 1][0] <= m:
            time -= 1
    if len(mas2) > 0:
        if mas2[0] + mas1[len(mas1) - 1][1] <= m:
            time -= 1

for i in range(len(mas2)):
    time += mas2[i]

time += len(mas2)

print(time)