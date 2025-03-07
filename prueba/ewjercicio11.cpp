#include <iostream>
#include <string>

void dividirPalabras(const std::string& cadena, std::string palabras[], int& cantidadPalabras) {
    cantidadPalabras = 0;
    std::string palabraActual = "";

    for (char c : cadena) {
        if (c == ' ') {
            if (!palabraActual.empty()) {
                palabras[cantidadPalabras++] = palabraActual;
                palabraActual = "";
            }
        } else {
            palabraActual += c;
        }
    }

    if (!palabraActual.empty()) {
        palabras[cantidadPalabras++] = palabraActual;
    }
}

void ordenarPalabrasPorLongitud(std::string palabras[], int cantidadPalabras) {
    for (int i = 0; i < cantidadPalabras - 1; i++) {
        for (int j = 0; j < cantidadPalabras - i - 1; j++) {
            if (palabras[j].length() < palabras[j + 1].length()) {
                
                std::string temp = palabras[j];
                palabras[j] = palabras[j + 1];
                palabras[j + 1] = temp;
            }
        }
    }
}


std::string reconstruirCadena(std::string palabras[], int cantidadPalabras) {
    std::string resultado = "";
    for (int i = 0; i < cantidadPalabras; i++) {
        resultado += palabras[i];
        if (i < cantidadPalabras - 1) {
            resultado += " ";
        }
    }
    return resultado;
}

std::string ordenarPalabrasPorLongitudTotal(const std::string& cadena) {
    
    const int MAX_PALABRAS = 100;
    std::string palabras[MAX_PALABRAS];
    int cantidadPalabras = 0;

    
    dividirPalabras(cadena, palabras, cantidadPalabras);


    ordenarPalabrasPorLongitud(palabras, cantidadPalabras);


    return reconstruirCadena(palabras, cantidadPalabras);
}

int main() {
    int opcion;
    std::string cadena;

    while (true) {

        std::cout << "Ordenador de Palabras\n";
        std::cout << "1. Ingresar palabras\n";
        std::cout << "2. Ingresar numeros\n";
        std::cout << "Elija una opcion: ";
        std::cin >> opcion;
        std::cin.ignore(); 

        cadena = "";

        if (opcion == 1) {
            std::cout << "Ingrese las palabras separadas por espacios: ";
            std::getline(std::cin, cadena);
        } else if (opcion == 2) {
            int cantidadNumeros;
            std::cout << "¿Cuantos numeros desea ingresar? ";
            std::cin >> cantidadNumeros;
            std::cin.ignore();

            std::cout << "Ingrese los numeros separados por espacios: ";
            std::getline(std::cin, cadena);
        } else {
            std::cout << "Opción invalida. Intente nuevamente.\n";
            continue;
        }


        if (cadena.empty()) {
            std::cout << "No se ingresaron datos.\n";
            continue;
        }

     
        std::string resultado = ordenarPalabrasPorLongitudTotal(cadena);
        std::cout << "Resultado ordenado: " << resultado << std::endl;
    }

    return 0;
}