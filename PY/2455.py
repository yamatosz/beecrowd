# BEE 2455 - Gangorra - Python

def gangorra(p1, c1, p2, c2):
    if p1*c1 == p2*c2:
        return 0
    return -1 if p1*c1 > p2*c2 else 1


p1, c1, p2, c2 = input().split()
aux = list(map(lambda x: int(x), [p1, c1, p2, c2]))
p1, c1, p2, c2 = aux[0], aux[1], aux[2], aux[3]
print(gangorra(p1, c1, p2, c2))
