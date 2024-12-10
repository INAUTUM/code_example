def seach(mas, end, start):
    global vrem
    mid = (end + start) // 2
    if mas[mid] <= vrem:
        if mas[mid] == vrem:
            print(mid)
        else:
            if mid + 1 < len(mas):
                if mas[mid + 1] <= vrem:
                    return seach(mas, end, mid + 1)
                else:
                    print(mid)
            else:
                print(mid)

    elif mas[mid] > vrem:
        return seach(mas, mid - 1, start)
    else:
        print(mid)

vrem = (24 - 20) * 60
n, m = map(int, input().split())
mas = [0]
for i in range(n):
    mas.append(((i + 1) * 5) + mas[i])
for i in range(len(mas)):
    mas[i] += m
chis = 0
seach(mas, len(mas), 0)
