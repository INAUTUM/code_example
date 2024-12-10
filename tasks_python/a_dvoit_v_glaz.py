n = int(input())
for kop in range(n):
    k = input()
    l = ''
    p = 0
    for i in range(len(k)):
        l += k[i] * 2
    op = len(l) // 2
    o = l[op:]
    if l[:op] == o[::-1]:
        print(l)
    else:
        i = 1
        io = l
        for i in range(op - 1):
            if io[:op] == o[::-1]:
                break
            else:
                io = io[:i + 1] + io[-2:] + io[i + 1:-2]
        print(io)

    #aannuuttffoorraaj jaarrooffttuunnaa
