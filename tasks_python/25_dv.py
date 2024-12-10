"""M(x) = a + b, где a - наименьший делитель x, не считая 1, b – наибольший делитель x, не считая x.
вывести 5 первых чисел, больших какого-то большого числа типа 800 000, для которых M оканчивается на 4, вывести эти
числа и M для них"""

def good(n):
    de = []
    for d in range(2, round(n ** (1/2)) + 1):
        if n % d == 0:
            de.append(d)
            if d != n // d:
                de.append(n // d)
    if len(de) > 1 and (max(de) + min(de)) % 10 == 4:
        return max(de) + min(de)
    return 0

ans = []
x = 800000
while len(ans) < 5:
    m = good(x)
    if m > 0:
        ans.append((x, m))
    x += 1
    
for x in ans:
    print(x)
