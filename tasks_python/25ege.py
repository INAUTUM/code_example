mas = []
for m in range(0, 100):
    for n in range(0, 100):
        if m % 2 == 0 and n % 2 > 0:
            mas.append(2**m * 3**n)
mas.sort()
c = [i for i in mas if 200000000 <= i <= 400000000]
print(c)
