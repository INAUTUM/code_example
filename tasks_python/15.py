ans = []
b = range(18, 52+1)
c = range(16, 41+1)
for a1 in range(1, 100):
    for a2 in range(a1 + 1, 100):
        a = range(a1, a2 + 1)
        f = True
        for x in range(1, 100):
            if (((x in b) <= (x in a)) and ((x not in c) or (x in a))) == False:
                f = False
                break
    if f:
        ans.append(a2 - a1)
print(max(ans))
