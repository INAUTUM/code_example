n = [['1C', 'BD', '1C', '55', '55'],
     ['55', '55', '55', '1C', '1C'],
     ['E9', '1C', '55', '55', 'E9'],
     ['BD', '1C', '1C', '1C', 'BD'],
     ['55', 'BD', 'E9', '55', '1C']]
c = ['BD', '1C', 'BD', '55']
otv = []
for i in range(len(n)):
    if c[0] == n[0][i]:
        otv.append(i + 1)
        break
mas = []
for i in range(1, len(c)):
    mas = []
    for b in range(len(n)):
        if len(mas) == len(n):
            break
        mas.append(n[b][otv[i - 1] - 1])
        print(mas)
    for l in range(len(mas)):
        if c[i] == mas[l]:
            otv.append(l + 1)
            break
    print(otv)
