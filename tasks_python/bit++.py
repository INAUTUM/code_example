x = 0
n = int(input())
for i in range(n):
    k = input()
    if "++" in k:
        x += 1
    elif "--" in k:
        x -= 1
print(x)