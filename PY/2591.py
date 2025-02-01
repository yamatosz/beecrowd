# BEE 2591 - HameKameKa - Python

def hamekameka(kamehameha: str):
    n = kamehameha.count('a')
    if n == 2:
        n = 1
    return 'k'+'a'*n


n_casos = int(input())
for caso in range(n_casos):
    print(hamekameka(input()))
