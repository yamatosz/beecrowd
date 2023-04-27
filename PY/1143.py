# BEE 1143 - Quadrado e ao Cubo - Python

def quadrado_ao_cubo(n):
    return [n, n*n, n*n*n]


n = int(input())

for i in range(1, n+1):
    res = quadrado_ao_cubo(i)
    print(f'{res[0]} {res[1]} {res[2]}')
