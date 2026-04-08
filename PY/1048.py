# 1048 - Aumento de Salário

salario = float(input())

if salario <= 400:
    percentual = 15
elif salario <= 800:
    percentual = 12
elif salario <= 1200:
    percentual = 10
elif salario <= 2000:
    percentual = 7
else:
    percentual = 4

aumento = salario * percentual / 100

print(f"Novo salario: {(salario + aumento):.2f}\nReajuste ganho: {aumento:.2f}\nEm percentual: {percentual} %")