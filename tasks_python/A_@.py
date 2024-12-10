n, d = map(int, input().split())
p = list(map(int, input().split()))

l = 0; r = n - 1
c = n - 1
while l <= r:
    if p[l] > d:
        res += 1
        c -= 1
        l += 1
        continue
    ll = 0; rr = c
    while ll <= rr:
        mid = ll + (rr - ll) // 2
        if p[l] * (c + 1) > d:
            r = mid
        else:
            l = mid
    if p[l] > (c + 1) > d:
        res += 1
        c -= 1
    else:
        break

print(res)
    