numero = int(input())

if (numero % 2 == 0):
    numero +=1
    impares = [numero, numero+2, numero+4, numero+6, numero+8, numero+10]
else:
    impares = [numero, numero+2, numero+4, numero+6, numero+8, numero+10]

for x in impares:
    print(x)