f = open('27_b.txt').read().split()
f = list(map(int, f[1:]))
f = sorted(f)
alf = {}
for i in f:
    if i % 6 in alf.keys():
        alf[i % 6].append(i)
    else:
        alf[i % 6] = [i]
print(alf)
alf[0] = alf[0][-4:]
alf[1] = alf[1][-4:]
alf[2] = alf[2][-4:]
alf[3] = alf[3][-4:]
alf[4] = alf[4][-4:]
alf[5] = alf[5][-4:]
print(max(sum(alf[0]), alf[1][1]+alf[1][2]+alf[1][3]+alf[3][-1], alf[0][-1]+alf[1][2]+alf[1][3]+alf[4][-1], alf[5][-1]+alf[1][-1]+alf[0][-1]+alf[0][-2], alf[2][-1]+alf[2][-2]+alf[2][-3]+alf[0][-1], alf[3][-1]+alf[2][-1]+alf[1][-1]+alf[0][-1], alf[4][-1]+alf[2][-1]+alf[0][-1]+alf[0][-2], alf[3][-1]+alf[3][-2]+alf[0][-1]+alf[0][-2], alf[1][-1]+alf[1][-2]+alf[2][-1]+alf[2][-2], alf[5][-1]+alf[5][-2]+alf[2][-1]+alf[0][-1], alf[4][-1]+alf[4][-2]+alf[4][-3]+alf[0][-1], sum(alf[3]), alf[5][-1]+alf[4][-1]+alf[3][-1]+alf[0][-1], alf[5][-1]+alf[5][-2]+alf[5][-3]+alf[3][-1], alf[5][-1]+alf[5][-2]+alf[4][-1]+alf[4][-2]))
