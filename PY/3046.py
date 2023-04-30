# BEE 3046 - Dominó - Python

def domino(n):
    return int(((n+1)*(n+2))/2)


peca = int(input())
print(domino(peca))
