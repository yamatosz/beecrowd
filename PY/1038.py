## --------------------------- URI 1038 LANCHE -------------------------------------
cod, quantidade = input().split()
cod = int(cod)
quantidade = int(quantidade)

if cod == 1:
    print(f'Total: R$ {quantidade*4.0:.2f}')
elif cod == 2:
    print(f'Total: R$ {quantidade*4.5:.2f}')
elif cod == 3:
    print(f'Total: R$ {quantidade*5.0:.2f}')
elif cod == 4:
    print(f'Total: R$ {quantidade*2.0:.2f}')
elif cod == 5:
    print(f'Total: R$ {quantidade*1.5:.2f}')