def factorize(n):
    divisor = 2
    while divisor ** 2 <= n:
        if n % divisor == 0:
            n //= divisor
            print(divisor)
        else:
            divisor += 1
    if n != 1:
        print(n)
n = int(input())
factorize(n)