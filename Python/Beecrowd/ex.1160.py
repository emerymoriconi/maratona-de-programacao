casos = int(input())
lista = []

def calcula_anos(informacoes):

    popA = int(informacoes[0])
    popB = int(informacoes[1])
    cresA = float(informacoes[2])
    cresB = float(informacoes[3])

    anos = 0

    while popA <= popB and anos <= 101:
        popA = int(((cresA/100) + 1) * popA)
        popB = int(((cresB/100) + 1) * popB)
        anos += 1

    return anos

for i in range(casos):

    informacoes = input().split()

    resp = calcula_anos(informacoes)

    lista.append(resp)

for ano in lista:
    if (ano > 100):
        print("Mais de 1 seculo.")
    else: 
        print(int(ano), "anos.")
