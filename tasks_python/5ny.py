mas = []
for i in range(4, 10000):
    def F(n):
        if n.count('1') > n.count('0'):
            n += '0'
        else:
            n += '1'
        return n
    def F1(n):
        if len(n) % 2 == 0:
            n = n[:len(n) // 2 - 1] + n[len(n) // 2 + 1:]
        else:
            n = n[:len(n) // 2 - 2] + n[len(n) // 2 + 1:]
        return n
    
    n = str(bin(i))[2:]
    n = F(n)
    n = F1(n)
    n = int(n, 2)
    
    if 50 <= n <= 100:
        mas.append(n)
print(len(set(mas)))
print(set(mas))