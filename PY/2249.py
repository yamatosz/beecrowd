# BEE 2249 - Número de Erdos - Python

teste = [['L. Erdos', 0], [' P. Erdos', 0], [' L. Ucas', 0],
         ['P. Erdos', 0], [' B. Bianca', 0], [' L. Ucas', 0]]

artigos_teste = [['P. Erdos', 'L. Erdos'], ['B. Bianca', 'L. Ucas']]


def get_artigos(n):
    artigos = []
    for i in range(n):
        autores = input('Digite os autores do artigo: ')
        artigos.append(autores.split(','))
    return artigos


def get_erdos(artigos, autores):
    for artigo in artigos:
        if 'P. erdos' in artigo:
            for autor in artigo:
                for autor[0] in autores:
                    autor[0] = 1

    return autores


def get_autores_unicos(artigos):
    autores_unicos = []
    for artigo in artigos:
        for autor in artigo:
            if autor not in autores_unicos:
                autores_unicos.append((autor, 0))
    return autores_unicos


def erdos(n):
    artigos = get_artigos(n)
    return get_autores_unicos(artigos)


print(get_erdos(autores=teste, artigos=artigos_teste))
