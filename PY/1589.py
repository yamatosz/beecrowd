# BEE 1589 - Bob Conduite - Python

def cabo(n, m):
    return n+m


t = input()
rn = []

for i in range(int(t)):
    r1, r2 = input().split()
    rns = list(map(lambda x: int(x), [r1, r2]))
    rn.append(rns)

for r in rn:
    print(cabo(r[0], r[1]))
