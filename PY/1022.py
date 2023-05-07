# BEE 1022 - TDA Racional - Python

def separator(entrada):
    entrada.strip()
    entrada = entrada.split()
    entrada = list(map(lambda x: int(x), entrada[::2]))
    return entrada


def get_sinal(entrada):
    entrada.strip()
    entrada = entrada.split()
    return entrada[3]


def mdc(n, d):
    while (d != 0):
        resto = n % d
        n = d
        d = resto

    return n


def tda(entrada):
    n1, d1, n2, d2 = separator(entrada)
    sinal = get_sinal(entrada)

    if sinal == '+':
        n, d = n1*d2+n2*d1, d1*d2
    elif sinal == '-':
        n, d = n1*d2-n2*d1, d1*d2
    elif sinal == '*':
        n, d = n1*n2, d1*d2
    else:
        n, d = n1*d2, n2*d1

    divisor_comum = mdc(n, d)
    return f'{n}/{d} = {int(n/divisor_comum)}/{int(d/divisor_comum)}'


n_casos = int(input())
for caso in range(n_casos):
    entrada = input()
    print(tda(entrada))
