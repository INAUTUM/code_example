o = False

def nah(mas, l, k ,u, ch, j, hj):
    global o
    if o == False:
        if mas[k][u] == ch[l]:
            o = True
            hj.append(u)
            mas[k][u] = '<>'
            if l + 1 > len(ch) - 1:
                return 0
            else:
                return nah(mas, l + 1, 0, u, ch, j, hj)
        else:
            if l == j - 1 or k == len(mas) - 1 or u == len(mas) - 1:
                return 0
            else:
                return nah(mas, l, k, u + 1, ch, j, hj)

    if o == True:
        print(mas[k][u], 1)
        if l == j - 1 or k == len(mas) - 1 or u == len(mas) - 1:
            return 0
        else:        
            if mas[k][u] == ch[l]:
                o = False
                hj.append(k)
                mas[k][u] = '<>'
                if l + 1 >= len(ch) - 1:
                    return 0
                else:
                    return nah(mas, l + 1, k, 0, ch, j, hj)
            else:
                if k == len(mas) - 1:
                    return 0
                else:
                    return nah(mas, l, k + 1, u, ch, j, hj)