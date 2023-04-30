# BEE 2984 - Assuntos pendentes - Python

def assuntos(entrada: str):
    abertos = 0
    for n in entrada:
        if n == '(':
            abertos += 1
        if n == ')':
            if abertos >= 1:
                abertos -= 1
    return 'Partiu RU!' if not abertos else f'Ainda temos {abertos} assunto(s) pendente(s)!'


entrada = input()
print(assuntos(entrada))
