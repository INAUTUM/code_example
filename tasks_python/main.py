for i in range(int(input())):
    a = input()
    x, y = 0, 0
    for j in a:
        if j == 'A': x += 1
        else: y += 1
    print('A' if x > y else 'B')