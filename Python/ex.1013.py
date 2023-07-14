numero = input().split()

numero1 = int(numero[0])
numero2 = int(numero[1])
numero3 = int(numero[2])

maior = int((numero1 + numero2 + abs(numero1 - numero2))/2)

maior2 = int((numero3 + maior + abs(numero3 - maior))/2)

print(f'{maior2} eh o maior')