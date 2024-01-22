# LCS - Complexidade O(n*m) sendo n o tamanho da string1 e m o tamanho da string2
# Já que a função LCS é chamada recursivamente para todas as combinações possíveis de indices entre n e m

import numpy as np

string1 = 'art'
string2 = 'debnm09'

tamanho1 = len(string1)  # linhas
tamanho2 = len(string2)  # colunas

memo = np.full((tamanho1, tamanho2), -1, dtype=int)  # matriz de -1
path = np.zeros((tamanho1, tamanho2), dtype=int)  # matriz para armazenar o caminho

def LCS(a, b):
    if a == tamanho1 or b == tamanho2:
        return 0

    if memo[a][b] != -1:
        return memo[a][b]

    if string1[a] == string2[b]:
        memo[a][b] = 1 + LCS(a + 1, b + 1)
        path[a][b] = 1  # indica que a letra é parte da LCS
        return memo[a][b]

    memo[a][b] = max(LCS(a + 1, b), LCS(a, b + 1))
    return memo[a][b]

def obter_LCS(a, b):
    if a == tamanho1 or b == tamanho2:
        return ""

    if path[a][b] == 1: # verifica se aquela letra faz parte da LCS
        return string1[a] + obter_LCS(a + 1, b + 1) # concatena a letra pertencente à LCS com os outros caracteres
    elif a + 1 < tamanho1 and b + 1 < tamanho2 and memo[a + 1][b] > memo[a][b + 1]:
        return obter_LCS(a + 1, b)
    elif b + 1 < tamanho2:
        return obter_LCS(a, b + 1)

comprimento_LCS = LCS(0, 0)
sequencia_LCS = obter_LCS(0, 0)

print("Comprimento da Subsequência Comum Mais Longa:", comprimento_LCS)
print("Subsequência Comum Mais Longa:", sequencia_LCS)
