//https://github.com/Anniechavez/Lenguaje-C
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void llenarvector(int v[], int n) {
    for(int i = 0; i < n; i++) {
        //v[i]=rand()%20+1;
        cin>>v[i];
    }
}

void copiarVector(int origen[], int destino[], int n) {
    for(int i = 0; i < n; i++) {
        destino[i] = origen[i];
    }
}

int ordenaburbuja(int v[], int n) {
    int aux, cont = 0;
    for(int i = 0; i < n; i++) {
        for(int j=0; j < n - 1; j++) {
            cont++;
            if(v[j]>v[j + 1]) {
                aux=v[j];
                v[j]=v[j + 1];
                v[j+1] = aux;
            }
        }
    }
    return cont;
}

int ordenaburbujav2(int v[], int n) {
    int mejora = 1;
    int aux, cont = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - mejora; j++) {
            cont++;
            if(v[j] > v[j + 1]) {
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
        mejora++;
    }
    return cont;
}

int ordenaburbujav3(int v[], int n) {
    int mejora = 1;
    bool cambio = true;
    int aux, cont = 0;
    for(int i = 0; i < n && cambio; i++) {
        cambio = false;
        for(int j = 0; j < n - mejora; j++) {
            cont++;
            if(v[j] > v[j + 1]) {
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
                cambio = true;
            }
        }
        mejora++;
    }
    return cont;
}

void muestravector(int v[], int n) {
    for(int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
}

int main() {
    int ne;
    cout << "Numero de elementos: ";
    cin >> ne;
    int vec[ne];
    int vec2[ne];
    int vec3[ne];
    
    llenarvector(vec, ne);
    cout << "Vector original: ";
    muestravector(vec, ne);
    cout << endl;
    copiarVector(vec, vec2, ne);
    copiarVector(vec, vec3, ne);
    int comp1 = ordenaburbuja(vec, ne);
    int comp2 = ordenaburbujav2(vec2, ne);
    int comp3 = ordenaburbujav3(vec3, ne);
    cout << "Comparaciones version 1: " << comp1 << endl;
    cout << "Comparaciones version 2: " << comp2 << endl;
    cout << "Comparaciones version 3: " << comp3 << endl;
    cout << "\nVector ordenado: "<<endl;
    muestravector(vec, ne);
}