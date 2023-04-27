# BEE 2936 - Quanta Mandioca? - Python

def mandiocas(convidados):
    return convidados[0]*300 + convidados[1]*1500 + convidados[2]*600 + convidados[3]*1000 + convidados[4]*150 + 225


print(mandiocas([int(input()) for i in range(5)]))
