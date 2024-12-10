f = open('27-3930a.txt')
n = int(f.readline())
f = list(map(int, f))
f = sorted(f)
alf = {}
for i in f:
    if i % 9 in alf.keys():
        alf[i % 9].append(i)
    else:
        alf[i % 9] = [i]
print(alf)
alf[0] = alf[0][:4]
alf[1] = alf[1][:4]
alf[2] = alf[2][:4]
alf[4] = alf[4][:4]
alf[5] = alf[5][:4]
alf[6] = alf[6][:4]
alf[7] = alf[7][:4]
alf[8] = alf[8][:4]
