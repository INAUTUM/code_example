import os 

user = 12 
n = 9 


for i in range(1, user + 1):
    k = "/Users/inautum/Desktop/matr/"
    os.chdir(k)
    os.mkdir(str(i))
    s = k + str(i)
    os.chdir(s)
    for j in range(1, user + 1):
        os.system(f'openssl rand -out {str(n) + "_" + str(i) + "_" + str(j)}.txt -base64 339')
