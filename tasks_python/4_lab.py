def f(y: int, k: int, z: list, s: bool = False):
    if s or k == 1:
        arr = [-1] * len(z)
        arr[k - 1] = y
        return [0, arr] if y == 0 else [z[k - 1][y - 1], arr]
    mx = [-1, [-1] * len(z)]
    for i in range(y + 1):
        f1 = f(i, k, z, True)
        f2 = f(y - i, k - 1, z, False)
        data = f1[0] + f2[0]
        if data > mx[0]:
            mx[0] = data
            mx[1][k - 1] = y
            sm = 0
            for f_data in [f1, f2]:
                for j, num in enumerate(f_data[1]):
                    if num != -1:
                        mx[1][j] = num
                        sm += num
    return mx

def find(z):
    data = f(len(z[0]), len(z), z)
    for i, elem in enumerate(data[1]):
        if elem == -1:
            data[i] = 0
    return data

z = [[10, 17, 21, 26, 32],
     [11, 14, 18, 24, 34],
     [6,  13, 18, 21, 22]]

print(find(z))
