# BEE 3037 - Jogando Dardos Por Distância - Python

def dardos(n):
    vencedores = []
    for i in range(n):
        joao = 0
        maria = 0
        for o in range(3):
            x, d = input().split()
            x = int(x)
            d = int(d)
            joao += x*d
        for o in range(3):
            x, d = input().split()
            x = int(x)
            d = int(d)
            maria += x*d
        vencedores.append(
            'JOAO') if joao > maria else vencedores.append('MARIA')
    return vencedores


n = int(input())
vencedores = dardos(n)
for vencedor in vencedores:
    print(vencedor)
