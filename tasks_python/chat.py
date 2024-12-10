n = int(input())
for i in range(n):
    k = 0
    a = int(input())
    b = input()
    b = b[::-1]
    if len(set(b)) == 1 and ")" in set(b):
        print("YES")
    elif b[0] == ")":
        for i in range(len(b)):
            if b[i] != ")":
                k = i
                break
        if len(b[:k]) <= len(b[k:]):
            print("NO")
        else:
            print("YES")
    else:
        print("NO")