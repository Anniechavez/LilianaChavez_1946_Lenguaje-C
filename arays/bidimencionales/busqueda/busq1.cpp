#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <time.h>
//#include ""
using namespace std;

bool isBusquedaBinaria(int v[], int n, int elemento) {
    int izquierda = 0, derecha = n - 1;
    
    while (izquierda <= derecha) {
        int medio = izquierda + (derecha - izquierda) / 2;
        
        if (v[medio] == elemento) 
            return true;
        
        if (v[medio] < elemento)
            izquierda = medio + 1;
        else
            derecha = medio - 1;
    }
    
    return false;
}

void llenarDatos(int v[], int n) {
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        v[i] = rand() % 20 + 1;
    }

    sort(v, v + n);
}

void verElemento(int v[], int n) {
    for (int i = 0; i < n; i++) {
        cout << v[i] << "\t";
    }
    cout << endl;
}

int main() {
    int ne, dato;
    cout << "Numero de datos de la array: ";
    cin >> ne;
    
    int vector[ne];
    llenarDatos(vector, ne);
    
    cout << "Arreglo generado: ";
    verElemento(vector, ne);
    
    cout << "Ingresar el dato que buscas: ";
    cin >> dato;
    
    (isBusquedaBinaria(vector, ne, dato)) ? 
        cout << "Dato encontrado" : 
        cout << "Dato no encontrado";
    
    return 0;
}