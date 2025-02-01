# BEE 1069 - Diamantes e Areia - Python

def diamantes(entrada):
    diamante = 0
    i = 0
    for char in entrada:
        if char == '<':
            i = entrada.index(char)
    return diamante


n = int(input())
for i in range(n):
    print(diamantes(input()))
