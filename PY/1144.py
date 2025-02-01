# BEE 1144 - SEQUÊNCIA LÓGICA

n = int(input())

for i in range (1, n +1):
    a = i
    b = i * i
    c = b * i
    d = i
    e = b + 1
    f = c + 1
    
    print(f"{a} {b} {c}")
    print(f"{d} {e} {f}")