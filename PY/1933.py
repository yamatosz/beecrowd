def tridu(a: int, b: int):
    return a if a > b else b

a, b = input().split()

a = int(a)
b = int(b)

print(tridu(a, b))