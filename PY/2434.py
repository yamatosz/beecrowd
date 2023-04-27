# BEE 2434 - Saldo do Vovo - Python

def balanco(saldo, movimentacoes):
    menor = saldo
    for movimentacao in movimentacoes:
        saldo += movimentacao
        if saldo < menor:
            menor = saldo
    return menor


n_movimentacoes, saldo = input().split()
saldo = int(saldo)
movimentacoes = [int(input()) for i in range(int(n_movimentacoes))]

print((balanco(saldo, movimentacoes)))
