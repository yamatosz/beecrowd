# BEE - Divisores I - Python


def divisores(n) -> list:
    divs = []
    for i in range(1, n+1):
        if not n % i:
            divs.append(i)
    return divs


num = int(input())
divs = divisores(num)
for div in divs:
    print(div)
