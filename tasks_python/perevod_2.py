number = (input("Enter value to be converted to decimal: "))
base = int(input("Enter the base of the value: "))

for index in number:
    print(index)

def hexConvert(number, base):
    for number > 0:
        if number == 1:
            return 1
        if number == 2:
            return 2
        if number == 3:
            return 3
        if number == 4:
            return 4
        if number == 5:
            return 5
        if number == 6:
            return 6
        if number == "7":
            return 7
        if number == "8":
            return 8
        if number == "9":
            return 9
        if number == "A":
            return 10
        if number == "B":
            return 11
        if number == "C":
            return 12
        if number == "D":
            return 13
        if number == "E":
            return  14
        elif number == "F":
            return 15
        else:
            print(number)


nString = ""
def deciConvert(number, base):
    number = int(number)
    while number > 0:
        bString = number%base
        nString = nString + str(bString)
        number = number // base

print(deciConvert(number, base))
