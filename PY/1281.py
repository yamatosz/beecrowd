# BEE 1281 - Ida à Feira - Python

class Verdura():

    def __init__(self, nome, valor):
        self.verdura = nome
        self.valor = valor


idas_a_feira = int(input())
for idas in range(idas_a_feira):
    qt_produtos_lista = int(input())
    produtos_lista = []

    for produto in range(qt_produtos_lista):
        nome, valor = input().split()
        valor = float(valor)
        nome = nome.lower()

        produtos_lista.append(Verdura(nome, valor))

    qt_produtos_quer = int(input())

    total = 0

    for produto_comprado in range(qt_produtos_quer):
        nome, quantidade = input().split()
        quantidade = int(quantidade)
        for produto in produtos_lista:
            if produto.verdura == nome.lower():

                total += (quantidade*produto.valor)

    print(f'R$ {total:.2f}')
