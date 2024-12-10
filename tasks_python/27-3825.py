f = open('27-3825b.txt').read().split()
f = list(map(int, f[1:]))
f = sorted(f)
g = sum(f)
p = str(g)
print(g)
print(p[5:])
alf = {}
for i in f:
    if i % 50 in alf.keys():
        alf[i % 50].append(i)
    else:
        alf[i % 50] = [i]
print(alf[1])
print(alf[19])
print(alf[20])
print(alf[21])
print(alf[22])
print(alf[23])
