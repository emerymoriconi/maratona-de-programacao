ddd = {61: 'Brasilia', 71: 'Salvador', 11: 'Sao Paulo', 21: 'Rio de Janeiro', 32: 'Juiz de Fora', 19: 'Campinas', 27: 'Vitoria', 31: 'Belo Horizonte'}

numero = int(input())

if numero not in ddd.keys():
    print('DDD nao cadastrado')

for chave, valor in ddd.items():
    if chave == numero:
        print(valor)