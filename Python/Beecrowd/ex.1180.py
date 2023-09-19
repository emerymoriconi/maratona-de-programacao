n = int(input())
#inicializando uma lista em python
x = []
num = input().split()

#range() itera sobre um conjunto iniciando do zero e incrementando 1 ate o ultimo elemento (by default)
for i in range(n):
    x.append(int(num[i]))

menor = x[0]

for i in x:
    if i < menor:
        menor = i

print('Menor valor:', menor)
#procurando o indice do menor elemento da lista
print('Posicao:', x.index(menor))