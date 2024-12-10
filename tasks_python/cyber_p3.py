def nah_a(mas, l, k, u, ch, j, hj, mas1, mas2):
    if mas[k][u] == ch[l]:
        return nah_b(mas, l + 1, k, 0, ch, j, hj, mas1, mas2)
    else:
        if u + 1 > len(mas) - 1:
            return nah_a(mas, l, k, u + 1, ch, j, hj, mas1, mas2)
        else:
            
        

def nah_b(mas, l, k, u, ch, j, hj, mas1, mas2):
    if mas[k][u] == ch[l]:
        return nah_a(mas, l + 1, 0, u, ch, j, hj, mas1, mas2)
    else:
        if u + 1 >= len(mas) - 1:
            return nah_b(mas, l, k + 1, u, ch, j, hj, mas1, mas2)
        else:
            if len(hj) < 4:
                return nah_a()