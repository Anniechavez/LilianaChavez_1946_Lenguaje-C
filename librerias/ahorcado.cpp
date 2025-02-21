#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <cctype>
#include "ahorcado.h"
using namespace std;

string palabraAleatoria(string palabras[]){
    srand(time(NULL));
    int numero = rand() % 5;
    return palabras[numero];
}

int opciones(){
    int op;
    cout << "1. Deportes" << endl;
    cout << "2. Animales" << endl;
    cout << "3. Frutas" << endl;
    cin >> op;
    return op;
}

string convertirAMayusculas(string palabra) {
    string resultado = palabra;
    for(int i = 0; i < palabra.length(); i++) {
        resultado[i] = toupper(palabra[i]);
    }
    return resultado;
}

bool jugarOtraVez() {
    char respuesta;
    cout << "Deseas jugar otra vez : (s/n): ";
    cin >> respuesta;
    return (tolower(respuesta) == 's');
}

int main(){
    string palabras[5], palabraSeleccionada;
    bool seguirJugando = true;

    while(seguirJugando) {
        int intentosRestantes = 5;
        bool palabraAdivinada = false;
        
        cout << "Juego del Ahorcado" << endl;
        cout << "-------------------" << endl;
        cout << "Elige una categoria: " << endl;
        
        int op = opciones();
        (op==1) ? deportes(palabras) : (op==2) ? animales(palabras): frutas(palabras);
        
        palabraSeleccionada = convertirAMayusculas(palabraAleatoria(palabras));
        string palabraOculta(palabraSeleccionada.length(), 'X');
        
        
        while(intentosRestantes > 0 && !palabraAdivinada) {
            cout << "Palabra a adivinar: " << palabraOculta << endl;
            cout << "Intentos restantes: " << intentosRestantes << endl;
          
            dibujarHorcado(intentosRestantes);
            
            char letra;
            cout << "Ingresa una letra: ";
            cin >> letra;
            letra = toupper(letra);
         
            bool letraEncontrada = false;
            for(int i = 0; i < palabraSeleccionada.length(); i++) {
                if(palabraSeleccionada[i] == letra) {
                    palabraOculta[i] = letra;
                    letraEncontrada = true;
                }
            }
            
            if(!letraEncontrada) {
                intentosRestantes--;
                cout << "letra incorrecta" << endl;
            }
            
            if(palabraOculta == palabraSeleccionada) {
                palabraAdivinada = true;
            }
        }
        
        if(palabraAdivinada) {
            cout << "Felicidad , has adivinado la palabra :" << palabraSeleccionada << endl;
        } else {
            dibujarHorcado(0);
            cout << "la palabra era :" << palabraSeleccionada << endl;
        }
        
        seguirJugando = jugarOtraVez();
    }
    
    cout << "Gracias por juagar" << endl;
    return 0;
}