valor = float(input())

n100 = 0
n50 = 0
n20 = 0
n10 = 0
n5 = 0
n2 = 0
m1 = 0
m050 = 0
m025 = 0
m010 = 0
m005 = 0
m001 = 0

if (valor > 100):
    n100 = int(valor/100)

if ((valor-n100*100) > 50):
    n50 = int((valor-n100*100)/50)

if ((valor-n100*100-n50*50) > 20):
    n20 = int((valor-n100*100-n50*50)/20)

if ((valor-n100*100-n50*50-n20*20) > 10):
    n10 = int((valor-n100*100-n50*50-n20*20)/10)

if ((valor-n100*100-n50*50-n20*20-n10*10) > 5):
    n5 = int((valor-n100*100-n50*50-n20*20-n10*10)/5)

if ((valor-n100*100-n50*50-n20*20-n10*10-n5*5) > 2):
    n2 = int((valor-n100*100-n50*50-n20*20-n10*10-n5*5)/2)

moedas = (valor - int(valor))*100

if (moedas >= 100):
    m1 = int(moedas/100)

if ((moedas-m1*100) >= 50):
    m050 = int((moedas-m1*100)/50)

if ((moedas-m1*100-m050*50) >= 25):
    m025 = int((moedas-m1*100-m050*50)/25)

if ((moedas-m1*100-m050*50-m025*25) >= 10):
    m010 = int((moedas-m1*100-m050*50-m025*25)/10)

if ((moedas-m1*100-m050*50-m025*25-m010*10) >= 5):
    m005 = int((moedas-m1*100-m050*50-m025*25-m010*10)/5)

if ((moedas-m1*100-m050*50-m025*25-m010*10-m005*5) >= 1):
    m001 = int((moedas-m1*100-m050*50-m025*25-m010*10-m005*5)/1)
               
print('NOTA:')
print(f'{n100} nota(s) de R$ 100.')
print(f'{n50} nota(s) de R$ 50.00')
print(f'{n20} nota(s) de R$ 20.00')
print(f'{n10} nota(s) de R$ 10.00')
print(f'{n5} nota(s) de R$ 5.00')
print(f'{n2} nota(s) de R$ 2.00')

print('MOEDAS:')
print(f'{m1} moeda(s) de R$ 1.00')
print(f'{m050} moeda(s) de R$ 0.50')
print(f'{m025} moeda(s) de R$ 0.25')
print(f'{m010} moeda(s) de R$ 0.10')
print(f'{m005} moeda(s) de R$ 0.05')
print(f'{m001} moeda(s) de R$ 0.01')