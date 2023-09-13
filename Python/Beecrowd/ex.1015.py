import math

ponto1 = input().split()
ponto2 = input().split()

x1 = float(ponto1[0])
y1 = float(ponto1[1])

x2 = float(ponto2[0])
y2 = float(ponto2[1])

distancia = math.sqrt(math.pow((x2 - x1), 2) + math.pow((y2 - y1), 2))

print(f'{distancia:.4f}')