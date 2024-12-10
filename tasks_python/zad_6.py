sr = 35
koef = 0.3

#koef = ((sum(mas) / sum(mas_kol)) ** 0.5) / sr

sr_kv_otkl = koef * sr

print('dispersion', sr_kv_otkl ** 2)