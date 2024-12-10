print('vvedite predlojenie')
n = input()
print('vvedite simvol')
n1 = input()
mas = []
nach = 0
for i in range(len(n)):
    if n[i] != ' ':
        break
    elif n[i] == ' ':
        mas.append(n[i])
        nach = i
n = n[nach:]
print(n)
for i in range(nach, len(n) - 1):
    if n[i + 1] == ' ':
        mas.append(n[nach:i+1])
        mas.append(n[i + 1:i + 2])
        nach = i + 1
for i in range(len(mas)):
    if mas[i] == ' ':
        mas[i] = ' ' + n1
print(mas)
