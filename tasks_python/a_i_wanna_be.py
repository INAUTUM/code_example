n = int(input())
k = list(map(int, input().split()))
k = k[1:]
ok = list(map(int, input().split()))
ok = ok[1:]
np = [i for i in range(0, n + 1)]
k = list(set([0] + k + ok))
if k[:n + 1] == np:
    print('I become the guy.')
else:
    print('Oh, my keyboard!')
