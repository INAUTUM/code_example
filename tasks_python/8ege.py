k = 0
alf = 'NASTI'
sl = ''
for a in alf:
    for b in alf:
        for c in alf:
            for d in alf:
                for e in alf:
                    for f in alf:
                        sl = a + b + c + d + e + f
                        if sl.count('A') <= 1 and sl.count('I') <= 1:
                            print(sl)
                            k += 1
print(k)
