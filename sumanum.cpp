#include <iostream>
#include <vector>

// Función para sumar los elementos de un arreglo de números
int sumaNumeros(const std::vector<int>& numeros) {
    int suma = 0;
    for (int num : numeros) {
        suma += num;
    }
    return suma;
}

int main() {
    // Ejemplo de uso de la función sumaNumeros
    std::vector<int> numeros = {1, 2, 3, 4, 5};
    int resultado = sumaNumeros(numeros);
    std::cout << "La suma de los números es: " << resultado << std::endl;

    return 0;
}
