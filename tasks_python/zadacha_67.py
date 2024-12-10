n = input()
n1 = input()
n2 = ''
for i in n:
    if i == ' ':
        n2 += ' ' + n1
    else:
        n2 += i
print(n2)