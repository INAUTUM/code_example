for x in range(1, 50):
    for y in range(1, 50):
        for z in range(1, 50):
            s = '0' + '1' * x + '2' * y + '3' * z + '0'
            while not '00' in s:
                s = s.replace('01', '210', 1)
                s = s.replace('02', '320', 1)
                s = s.replace('03', '3012', 1)
            if s.count('1') == 23 and s.count('2') == 48 and s.count('3') == 41:
                print(x + y + z + 2)
