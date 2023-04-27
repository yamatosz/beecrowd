# BEE 2016 - As Abas de Péricles - Python

def abas(n, acoes):
    for acao in acoes:
        if (acao == 'fechou'):
            n += 1
        else:
            n -= 1
    return n


n, n_acoes = input().split()
acoes = [input() for i in range(int(n_acoes))]
print(abas(int(n), acoes))
