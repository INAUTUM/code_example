n = int(input())
mas = []
mas1 = []
for i in range(n):
    mas1 = list(map(int, input().split()))
    mas.append(mas1)
    mas1 = []
sum1 = 0
for i in range(n):
    sum1 += sum(mas[i])
min1 = mas[len(mas) - 1][0]
for i in range(0, len(mas)):
    if min1 > mas[i][len(mas) - 1 - i]:
        min1 = mas[i][len(mas) - 1 - i]
print(sum1 - min1)
