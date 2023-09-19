#código correto porém com complexidade O(n²)
nums = []
resposta = []

x = input().split()
tam = len(x)

for i in range(tam):
    nums.append(int(x[i]))

target = int(input())

for i in range(tam):
    j = i + 1
    testado = nums[i]
    while j < tam:
        if testado + nums[j] == target:
            resposta.append(i)
            resposta.append(j)
            break
        j+=1

print(resposta)