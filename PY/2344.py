# BEE 2344 - Notas da Prova - Python
def nota(notas: int):
    if notas >= 1 and notas <= 35:
        return 'D'
    elif notas >= 36 and notas <= 60:
        return 'C'
    elif notas >= 61 and notas <= 85:
        return 'B'
    elif notas >= 86 and notas <= 100:
        return 'A'
    return 'E'


print(nota(int(input())))
