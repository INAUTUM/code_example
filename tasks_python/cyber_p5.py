def med(i):
    global mas
    for n in range(mas_kol[i]):
        mas.append(mas_voz[i])
    if i + 1 < len(mas_kol) - 1:
        return med(i + 1)

def disp(i):
    global sr
    mas.append((mas_voz[i] - sr) ** 2 * mas_kol[i])
    if i + 1 <= len(mas_kol) - 1:
        return disp(i + 1)

mas_voz = [30, 32, 33, 40, 45, 50, 55, 60]
mas_kol = [20, 80, 90, 110, 130, 170, 90, 90]

sr = 0

for i in range(len(mas_voz)):
    sr += mas_voz[i] * mas_kol[i]

sr /= sum(mas_kol)

print('sr_voz', sr)
print('mod_voz', mas_voz[mas_kol.index(max(mas_kol))])

mas = []

sr = int(sr)

med(0)

print('mediana', mas[len(mas) // 2])

mas = []

disp(0)

print('razmah_var', max(mas_voz) - min(mas_voz))

print('dispersion', sum(mas) / sum(mas_kol))

print('sr_kv_otkl', (sum(mas) / sum(mas_kol)) ** 0.5)

print('koef_variac', ((sum(mas) / sum(mas_kol)) ** 0.5) * 100 / sr, '%') 