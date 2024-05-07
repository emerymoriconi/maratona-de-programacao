from math import factorial, comb

def eh_primo(n): # Número primo ou não
    if n <= 1:
        return False
    if n <= 3:
        return True
    if n % 2 == 0 or n % 3 == 0:
        return False
    i = 5
    while i * i <= n:
        if n % i == 0 or n % (i + 2) == 0:
            return False
        i += 6
    return True
 
def count_primos(x,y):
    count = 0
    if x>y:
        aux = x
        x = y
        y = aux
    if 2 >= x:
        count += 1
    if x%2==0:
        x+=1
    for i in range(x, y+1, 2):
        if eh_primo(i):
            count += 1
    return count
 
n, m = [int(x) for x in input().split()]
x = abs(n-m)

if x==0:
    print('?')
else:
    quant_primos = count_primos(n, m)
    total = factorial(quant_primos+x-1)//(factorial(x)*(factorial(quant_primos+x-1-x)))

    if total%2==1:
        print('Alice')
    else:
        print('Bob')