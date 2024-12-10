aa = ['BD','1C','BD','55']
b = []
c = 0

mat =        ([['1C','BD','1C','55','55'],
               ['55','55','55','1C','1C'],
               ['E9','1C','55','55','E9'],
               ['BD','1C','1C','1C','BD'],
               ['55','BD','E9','55','1C']])
mat2 = mat.copy()
def row (i):
  global b, c

  for j in range(5):
    if mat2[i][j] == aa[c]:
      c+=1
      b.append(j+1)
      if c == 4:
        
        print(b)
        
        b.pop(3)
        c-=1
        continue
      a = mat2[i][j]
      mat2[i][j] = 0
      column(j)
      c-=1
      b.pop(c)
      mat2[i][j] = a
      print(1)
      print(mat2)
      

def column (j):
  global b, c 
  
  for i in range(5):
    if mat2[i][j] == aa[c]:
      c+=1
      b.append(i+1)
      if c == 4:
        
        print(b)
        
        b.pop(3)
        c-=1
        continue
      a = mat2[i][j]
      mat2[i][j] = 0
      row(i)
      c-=1
      b.pop(c)
      mat2[i][j] = a
row(0)