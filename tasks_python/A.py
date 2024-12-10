n, d = map(int, input().split())
a = list(map(int, input().split()))

a.sort(key=lambda x: -x)
l = 0; r = n - 1
res = 0
while l <= r:
	if a[l] > d:
		res += 1
		l += 1
		continue
	ll = l + 1; rr = r
	while ll < rr:
		mid = ll + (rr - ll) // 2
		if a[l] * (r - mid + 2) > d:
			ll = mid + 1
		else:
			rr = mid - 1
	
	if a[l] * (r - ll + 2) > d:
		res += 1
		r = rr - 1
	else:
		break
print(res)