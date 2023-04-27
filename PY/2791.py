# BEE 2791 - Feijao - Python

def feijao(posicoes):
    return list(map(lambda x: int(x), posicoes)).index(1)+1


print(feijao(input().split()))
