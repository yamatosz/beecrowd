# BEE 2416 - Corrida - Python

def corrida(c, n):
    return c % n


c, n = input().split()

print(corrida(int(c), int(n)))
