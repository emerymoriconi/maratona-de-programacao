# LCS - Complexidade O(n*m) sendo n o tamanho da string1 e m o tamanho da string2
# Já que a função LCS é chamada recursivamente para todas as combinações possíveis de indices entre n e m

import numpy as np

string1 = 'ace'
string2 = 'abcde'

tamanho1 = len(string1) #linhas
tamanho2 = len(string2) #colunas

memo = np.zeros((tamanho1, tamanho2), dtype=int) #matriz de zeros

def LCS(a, b):
  if a == tamanho1 or b == tamanho2:
    return 0
  
  if memo[a][b] != 0:
    return memo[a][b]
  
  if string1[a] == string2[b]:
    memo[a][b] = 1 + LCS(a + 1, b + 1)
    return memo[a][b]
  
  memo[a][b] = max(LCS(a + 1, b), LCS(a, b + 1))
  return memo[a][b]

resposta = LCS(0, 0)

print("Comprimento da Subsequência Comum Mais Longa:", resposta)