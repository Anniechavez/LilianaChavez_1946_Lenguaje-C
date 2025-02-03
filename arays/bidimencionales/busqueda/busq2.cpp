#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// Función para realizar búsqueda binaria
bool busquedaBinaria(vector<int>& arr, int elemento) {
    int izquierda = 0;
    int derecha = arr.size() - 1;

    while (izquierda <= derecha) {
        // Calcular el índice medio (evita desbordamiento)
        int medio = izquierda + (derecha - izquierda) / 2;

        // Si el elemento está en el medio, lo encontramos
        if (arr[medio] == elemento) {
            return true;
        }

        // Si el elemento es mayor, buscar en la mitad derecha
        if (arr[medio] < elemento) {
            izquierda = medio + 1;
        } 
        // Si el elemento es menor, buscar en la mitad izquierda
        else {
            derecha = medio - 1;
        }
    }

    // El elemento no se encontró
    return false;
}

int main() {
    int n, elemento;
    
    // Pedir tamaño del arreglo
    cout << "Ingrese el número de elementos: ";
    cin >> n;

    // Crear y llenar el arreglo
    vector<int> arr(n);
    cout << "Ingrese los elementos (en orden ascendente): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Verificar si está ordenado
    if (!is_sorted(arr.begin(), arr.end())) {
        cout << "El arreglo debe estar ordenado para la búsqueda binaria." << endl;
        return 1;
    }

    // Pedir elemento a buscar
    cout << "Ingrese el elemento a buscar: ";
    cin >> elemento;

    // Realizar búsqueda binaria
    if (busquedaBinaria(arr, elemento)) {
        cout << "El elemento " << elemento << " fue encontrado." << endl;
    } else {
        cout << "El elemento " << elemento << " no fue encontrado." << endl;
    }

    return 0;
}