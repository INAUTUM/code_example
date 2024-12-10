for i in range(525784203, 728943763):
    def f(n):
        mas = []
        kor = int(n ** 0.5)
        global k
        if n == 1:
            return 1
        for j in range(2, kor + 1):
            if k < 5:
                if n % j == 0:
                    mas.append(n // j)
                    k += 1
                    if j != n // j:
                        mas.append(j)
                        k += 1
            else:
                break
        return mas
    k = 0
    l = f(i)
    if k == 3:
        print(l)
