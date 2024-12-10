n = int(input())
for i in range(n):
    g = input()
    if len(g) > 10:
        print(g[:1] + str((len(g)) - 2) + str(g[len(g) - 1:]))
    else:
        print(g)