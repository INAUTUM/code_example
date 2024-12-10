import sys 
sys.setrecursionlimit(100000)

def seach(mas, end, start):
    global b
    global win
    global right
    #print(start, end, '+')
    #print(mas[start:end + 1])
    mid = (start + end) // 2
    if mas[start] > b or mas[end] > b:
        #$print('+', mas[start], start, end)
        win += 1
        if end >= start + 1 and mas[start] > b:
            seach(mas, end, start + 1)
        elif end - 1 >= start and mas[end] > b:
            seach(mas, end - 1, start)
        else:
            return 0
    elif mas[end] * (end - mid + 2 if len(mas[start:end + 1]) > 2 else end - mid + 1) > b and len(mas[start:end + 1]) > 1:
        #$print(mas[start:end + 1])
        #print(end - mid + 2 if len(mas[start:end + 1]) > 2 else right - mid + 1, right, mid) 
        #print(mas[end] * (right - mid + 2))
        win += 1
        if end > start + b // mas[end]:
            #print(end, start, mas[end] * (right - mid + 1), mid)
            seach(mas, end - 1, start + b // mas[end] if int(b / mas[end]) == b // mas[end] else start + b // mas[end] + 1)
    #elif len(mas[start:end]) == 1 and mas[end] * (right - mid + 1) > b:
        #print(mas[end] * (right - mid + 1), start, end, len(mas[start:end]))
        #win += 1
        #return 0
win = 0
a, b = map(int, input().split())
mas = list(map(int, input().split()))
mas.sort() #3 4 6
for i in range(len(mas) - 1, -1, -1):
    if mas[i] > b:
        win += 1
        mas.pop(i)
right = a - 1 # 50 60 70 80 90 100
#print(len(mas))
if len(mas) >= 2:
    seach(mas, len(mas) - 1, 0)
print(win)
