def f(n):
    global sum
    if n == '/0':
        return 0
    else:
        if n[0] == '+' or n[0] == '/' or n[0] == '-' or n[0] == '*':
            if n[0] == '+':
                sum += int(n[1:])
                print(sum)
            elif n[0] == '*':
                sum *= int(n[1:])
                print(sum)
            elif n[0] == '-':
                sum -= int(n[1:])
                print(sum)
            elif n[0] == '/':
                sum /= int(n[1:])
                if sum == int(sum):
                    print(int(sum))
                else:
                    print(sum) 
        else:
            for i in range(len(n)): 
                if n[i] == '+':
                    sum += int(n[:i]) + int(n[i + 1:])
                    print(sum)
                    break
                elif n[i] == '*':
                    sum += int(n[:i]) * int(n[i + 1:])
                    print(sum)
                    break
                elif n[i] == '-':
                    sum += int(n[:i]) - int(n[i + 1:])
                    print(sum)
                    break
                elif n[i] == '/':
                    sum += int(n[:i]) / int(n[i + 1:])
                    if sum == int(sum):
                        print(int(sum))
                    else:
                        print(sum)
                    break
        n = input()
        return f(n)



n = input()
sum = 0
f(n)
