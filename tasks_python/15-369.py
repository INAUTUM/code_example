m = []
a = []
p = []
for i in range(5, 31):
    p.append(i)
q = []
g = []
for i in range(14, 25):
    q.append(i)
for i in range(5, 31):
    a = []
    t = True
    for b in range(i, 31):
        a.append(i)
        for x in range(40):
            if (((x in p) == (x in q)) <= (x not in a)) == False:
                t = False
                break
        if t == True:
            g.append(len(a))
print(g)
