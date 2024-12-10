l = 1
t = 1
k = 4
cd = 5
otv = []
n = [['1C', 'BD', '1C', '55', '55'],
     ['55', '55', '55', '1C', '1C'],
     ['E9', '1C', '55', '55', 'E9'],
     ['BD', '1C', '1C', '1C', 'BD'],
     ['55', 'BD', 'E9', '55', '1C']]
c = ['BD', '1C', 'BD', '55']
def f(l, otv, mas):
    global n
    global c
    print(mas)
l = 1
t = 1
k = 4
cd = 5
otv = [0] * k
n = [['1C', 'BD', '1C', '55', '55'],
     ['55', '55', '55', '1C', '1C'],
     ['E9', '1C', '55', '55', 'E9'],
     ['BD', '1C', '1C', '1C', 'BD'],
     ['55', 'BD', 'E9', '55', '1C']]
c = ['BD', '1C', 'BD', '55']
c.pop(0)
mas = []
for i in range(cd):
    mas.append(n[0][i])
f(l, otv, mas)
