# BEE 1038 - Lanche - Python
def get_total(cod, quantidade):
    produtos = [4, 4.5, 5, 2, 1.5]
    return produtos[cod-1]*quantidade


cod, quantidade = input().split()
cod = int(cod)
quantidade = int(quantidade)

total = get_total(cod, quantidade)
print(f'Total: R$ {total:.2f}')
