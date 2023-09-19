lista = []
entrada = int(input())
n = 0

while n < entrada:
    if n == 0:
        lista.append(0)
    if n == 1:
        lista.append(1)

    if n > 1:
        lista.append(lista[n - 1] + lista[n - 2])

    n+=1

for number in lista:
    #caso seja o ultimo elemento, imprime sem espaço no final
    if number == lista[entrada -1]:
        print(number)
    else:
    #imprime todos os elementos da lista na mesma linha
        print(number, end=" ")
