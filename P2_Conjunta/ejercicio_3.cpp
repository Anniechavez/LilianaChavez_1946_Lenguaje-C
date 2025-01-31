#include <iostream>
#include <string>
using namespace std;

string obtenerCategoria(int valor) {
    
    string categorias[] = {"deficiente", "regular", "bueno", "muy bueno", "excelente"};
    int limites[] = {5, 10, 15, 18, 20};
    
   
    int indice = 0;
    indice += (valor <= limites[0]); 
    indice += (valor <= limites[1]); 
    indice += (valor <= limites[2]); 
    indice += (valor <= limites[3]); 
    indice += (valor <= limites[4]); 
    
    return categorias[indice - 1];
}

int main() {
   
    int valores[] = {3, 8, 13, 17, 19};
    
    for(int i = 0; i < 5; i++) {
        cout << "Valor: " << valores[i] 
             << " -> " << obtenerCategoria(valores[i]) << endl;
    }
    
    return 0;
}