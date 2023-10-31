num = int(input())
respostas = []

for i in range(num):
    quantidade_k = 0
    entrada = str(input())
    i = len(entrada) - 1
    
    while entrada[i] == '!':
        quantidade_k = quantidade_k + 1
        #removendo certos caracteres da minha string de modo que reste apenas o numero N
        string = entrada.replace(entrada[i], "")
        i = i - 1
    
    n = int(string)
    resultado = n
    aux = 1

    while (n - aux*quantidade_k) >= 1:
        resultado = resultado * (n - aux*quantidade_k)
        aux = aux + 1

    respostas.append(resultado)

for r in respostas:
    print(r)