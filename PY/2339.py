# BEE 2339 - Aviões de Papel - Python

def avioes(c, p, f):
    return 'S' if p >= c*f else 'N'


c, p, f = input().split()
aux = list(map(lambda x: int(x), [c, p, f]))
c, p, f = aux[0], aux[1], aux[2]
print(avioes(c, p, f))
