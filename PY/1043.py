# BEE 1043 - Triangulo - Python

def triangulo(a, b, c):
    condicao_a = a > abs(b-c) and a < b + c
    condicao_b = b > abs(a-c) and b < a + c
    condicao_c = c > abs(a-b) and c < a + b

    if condicao_a and condicao_b and condicao_c:
        return f'Perimetro = {(a + b + c):.1f}'

    else:
        return f'Area = {(a+b)*c/2:.1f}'


a, b, c = input().split()
a = float(a)
b = float(b)
c = float(c)

print(triangulo(a, b, c))
