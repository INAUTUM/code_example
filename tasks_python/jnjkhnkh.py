a, b = map(int, input().split())
print(b)
if a > b:
    print(a ** 2 - b ** 3)
else:
    print(b ** 2 - a ** 3)