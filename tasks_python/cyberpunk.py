import cyber_p
import cyber_p2
import cyber_p3

t = int(input())
for i in range(t):
    j = int(input())
    ch = list(input().split())
    n = int(input())
    mas = []
    o = False
    hj = []
    for i in range(n):
        mas.append(list(input().split()))
    l = 0
    k = 0
    u = 0
    mas1 = []
    mas2 = []
    cyber_p2.nah2(mas, l, k, u, ch, j, hj, mas1, mas2)
    print(mas2)