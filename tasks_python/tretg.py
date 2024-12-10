mas = list(map(int, input().split()))

a = (abs(mas[0] ** 2 - mas[2] ** 2) + abs(mas[1] ** 2 - mas[3] ** 2)) ** 0.5
b = (abs(mas[2] ** 2 - mas[4] ** 2) + abs(mas[3] ** 2 - mas[5] ** 2)) ** 0.5
c = (abs(mas[4] ** 2 - mas[0] ** 2) + abs(mas[5] ** 2 - mas[1] ** 2)) ** 0.5

p = (a + b + c) / 2

print((p * (p - a) * (p - b) * (p - c)) ** 0.5)