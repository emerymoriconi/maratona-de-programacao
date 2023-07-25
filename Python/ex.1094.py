n = int(input())
i = 0
cobaias = 0
ratos = 0
coelhos = 0
sapos = 0

while i < n:

    entrada = input().split()

    numero = int(entrada[0])
    letra = str(entrada[1])

    if (letra=='R'):
        ratos+=numero
    elif (letra=='S'):
        sapos+=numero
    elif (letra=='C'):
        coelhos+=numero
    
    cobaias+=numero

    i+=1

per_coelhos = (coelhos/cobaias)*100
per_ratos = (ratos/cobaias)*100
per_sapos = (sapos/cobaias)*100

print(f"Total: {cobaias} cobaias")
print(f"Total de coelhos: {coelhos}")
print(f"Total de ratos: {ratos}")
print(f"Total de sapos: {sapos}")
print(f"Percentual de coelhos: {per_coelhos:.2f} %")
print(f"Percentual de ratos: {per_ratos:.2f} %")
print(f"Percentual de sapos: {per_sapos:.2f} %")