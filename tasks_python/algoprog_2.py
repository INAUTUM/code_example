n = int(input())
ans = []
d = 2
L = ''
while d * d <= n:
    if n % d == 0:
        ans.append(d)
        n //= d
    else:
        d += 1
if n > 1:
    ans.append(n)
for i in range(len(ans) - 1):
    L += str(ans[i]) + '*'
print(L + str(ans[-1]))
