notas = input().split()

nota1 = float(notas[0])
nota2 = float(notas[1])
nota3 = float(notas[2])
nota4 = float(notas[3])

media = (nota1*2 + nota2*3 + nota3*4 + nota4*1)/10

print (f'Media: {media:.1f}')

if media >= 7:
    print('Aluno aprovado.')
elif media < 5: 
    print('Aluno reprovado.')
elif media >= 5 and media <= 6.9:
    print('Aluno em exame.')

    exame = float(input())

    print(f'Nota do exame: {exame:.1f}')

    media2 = (exame + media)/2

    if media2 >= 5:
        print('Aluno aprovado.')
        print(f'Media final: {media2:.1f}')
    else:
        print('Aluno reprovado.')
        print(f'Media final: {media2:.1f}')