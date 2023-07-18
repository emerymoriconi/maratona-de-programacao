numero = input().split()

A = int(numero[0])
B = int(numero[1])
C = int(numero[2])
D = int(numero[3])

if B > C and D > A and (C + D) > (A + B) and C >= 0 and D >= 0 and A%2==0:
    print('Valores aceitos')
else:
    print('Valores nao aceitos')