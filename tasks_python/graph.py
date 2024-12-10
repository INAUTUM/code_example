m = [
    [0, 1, 1, 0],
    [0, 0, 1, 1],
    [0, 0, 0, 0],
    [0, 0, 0, 0]
]
res, st = [], [[0]]
while st:
    lis_cur = st.pop(0)
    i_cur   = lis_cur[-1]
    if any( m[i_cur] ):
        for j in range(len(m)):
            if m[i_cur][j]:
                st.append(lis_cur + [j])
    else:
        res.append(lis_cur)
for i in range(len(res)):
    print(f"{i + 1}) {''.join(list(str(res[i])))}")