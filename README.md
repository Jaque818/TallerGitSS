// aqui estraria mi codigo si tuviera uno
import random

def generar_lista_aleatoria(n):
    """Genera una lista aleatoria de números enteros."""
    return [random.randint(1, 100) for _ in range(n)]

def dividir_lista(lista):
    """Divide una lista en dos sublistas."""
    mitad = len(lista) // 2
    return lista[:mitad], lista[mitad:]

def sumar_lista(lista):
    """Calcula la suma de todos los elementos de una lista."""
    if len(lista) == 1:
        return lista[0]
    else:
        izquierda, derecha = dividir_lista(lista)
        return sumar_lista(izquierda) + sumar_lista(derecha)

def main():
    # Generar una lista aleatoria de longitud 10
    lista_aleatoria = generar_lista_aleatoria(10)
    print("Lista generada aleatoriamente:", lista_aleatoria)

    # Calcular la suma de los elementos de la lista
    suma = sumar_lista(lista_aleatoria)
    print("La suma de los elementos de la lista es:", suma)

if __name__ == "__main__":
    main()
