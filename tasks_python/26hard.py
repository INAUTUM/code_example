def chisla(n):
   i = 2
   global mas
   while i ** 2 <= n:
       while n % i == 0:
           mas.append(i)
           n //= i
       i += 1
   if n > 1:
       mas.append(n)

n = int(input())
p = [2]
mas = []

for i in range(3, 1000):
    t = True
    for b in range(2, int(i ** 0.5) + 1):
        if i % b == 0:
            t = False
            break
    if t == True:
        p.append(i)

chisla(n)

mas = mas[::-1]
print(mas)

ans = 1
for i in range(len(mas)):
    print(p[i], mas[i])
    ans *= p[i] ** (mas[i] - 1)
print(ans, p[len(mas) - 1])