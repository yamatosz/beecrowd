valor = 0
n = int(input())
for ns in range(n):
    t, v = input().split()
    t = int(t)
    v = int(v)
    valor += t*v
print(valor)
