def f(n, mas, mas1):
    if n == 2:
        mas.append(2)
        if len(mas) == 2:
            print('Доброго пути')
            del mas[:]
        else:
            print('Ты ходишь по очень тонкому льду')
    else:
        del mas[:]
    n = input()
    try:
        return(f(int(n), mas, mas1))
    except EOFError:
        return 0

n = int(input())
mas1 = '1234567890'
mas = []
f(n, mas, mas1)