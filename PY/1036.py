import math

a, b, c = input().split()
a=float(a)
b=float(b)
c=float(c)

delta = (b**2)-4*a*c
delta = float(delta)


if delta>0 and a!=0: 
    x = (-b+(math.sqrt(delta)))/(2*a)
    x2 = (-b-(math.sqrt(delta)))/(2*a)
    print(f"R1 = {x:.5f}")
    print(f"R2 = {x2:.5f}")
else:
    print("Impossivel calcular")


