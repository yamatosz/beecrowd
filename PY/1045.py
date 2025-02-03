# BEE 1045 - TIPOS DE TRIÂNGULOS

a, b, c = map(float, input().split())

lados = [a, b, c]
lados.sort(reverse=True)
a, b, c = lados
if a >= b + c:
    print("NAO FORMA TRIANGULO")
elif a * a == (b * b) + (c * c):
    print("TRIANGULO RETANGULO")
elif a * a > (b * b) + (c * c):
    print("TRIANGULO OBTUSANGULO")
elif a * a < (b * b) + (c * c): 
    print("TRIANGULO ACUTANGULO")

if a == b and b == c:
    print("TRIANGULO EQUILATERO")
elif a == b or b == c or a == c:
    print("TRIANGULO ISOSCELES")
