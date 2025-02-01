# BEE 1985 - MacPRONALTS
def calcular(cod, q):
    cardapio = dict({"1001": 1.5,"1002": 2.5,"1003": 3.5,"1004": 4.5,"1005": 5.5})

    return q * cardapio[str(cod)]

p = int(input())
r = 0

for _ in range(p):
    cod, q = map(int, input().split())
    r += calcular(cod, q)

print("%.2f" %r)