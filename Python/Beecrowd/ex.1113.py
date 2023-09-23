lista = []
X = 0
Y = 1

while X != Y:
    entrada = input().split()
    X = int(entrada[0])
    Y = int(entrada[1])

    if X > Y:
        resp = str("Decrescente")
        lista.append(resp)
    
    if X < Y:
        resp = str("Crescente")
        lista.append(resp)

for resposta in lista:
    print(resposta)
