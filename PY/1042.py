# BEE 1042 - SORT SIMPLES

def insertion_sort(lista: list):
    lista_sorted = lista.copy()
    for i in range(1, len(lista_sorted)):
        k = lista_sorted[i]
        j = i -1 
        while j>=0 and lista_sorted[j] > k:
            lista_sorted[j+1] = lista_sorted[j]
            j = j-1

        lista_sorted[j+1] = k

    return lista_sorted

a, b, c = map(int, input().split())

lista = [a, b, c]

lista_sorted = insertion_sort(lista)

for i in lista_sorted:
    print(i)

print()

for i in lista:
    print(i)