p = range(10, 30)
q = range(13, 18)
ans = []
for a1 in range(1000):
    for a2 in range(a1 + 1, 1000):
        t = True
        a = range(a1, a2 + 1)
        for x in range(100):
            if (((x in a) <= (x in p)) or (x in q)) == False:
                t = False
                break
    if t:
        ans.append(abs(a1 - a2))
print(ans)