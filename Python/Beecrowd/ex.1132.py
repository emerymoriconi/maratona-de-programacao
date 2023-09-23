X = int(input())
Y = int(input())
sum = 0

if Y < X:
    aux = X
    X = Y
    Y = aux

for i in range(X, Y + 1):
    if i % 13 != 0:
        sum = sum + i

print(sum)