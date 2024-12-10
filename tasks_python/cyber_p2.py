def nah2(mas, l, k, u, ch, j, hj, mas1, mas2):
    if mas[k][u] == ch[l]:
        mas1.append(u)
        if u + 1 <= len(mas) - 1:
            return nah2(mas, l, k, u + 1, ch, j, hj, mas1, mas2)
        else:
            mas2.append(mas1)
            mas1 = []
            if u + 1 >= len(mas) - 1:
                return nah3(mas, l + 1, 0, u, ch, j, hj, mas1, mas2)
    elif u + 1 <= len(mas) - 1:
        return nah2(mas, l, k, u + 1, ch, j, hj, mas1, mas2)
    else:
        if len(mas1) > 0:
            if l < j - 1:
                mas2.append(mas1)
                mas1 = []
                return nah3(mas, l + 1, 0, u, ch, j, hj, mas1, mas2)


def nah3(mas, l, k, u, ch, j, hj, mas1, mas2):
    print(mas[k][u], ch[l], k, u)
    print(mas2)
    if mas[k][u] == ch[l]:
        mas1.append(k)
        if k + 1 <= len(mas) - 1:
            return nah3(mas, l, k + 1, u, ch, j, hj, mas1, mas2)
        else:
            mas2.append(mas1)
            mas1 = []
            if k + 1 >= len(mas) - 1:
                return nah2(mas, l + 1, k, 0, ch, j, hj, mas1, mas2)
    elif k + 1 <= len(mas) - 1:
        print('piska')
        return nah3(mas, l, k + 1, u, ch, j, hj, mas1, mas2)
    else:
        if len(mas1) > 0:
            if l < j - 1:
                mas2.append(mas1)
                mas1 = []
                return nah2(mas, l + 1, k, 0, ch, j, hj, mas1. mas2)
