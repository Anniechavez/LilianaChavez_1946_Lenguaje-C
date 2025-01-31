#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
int obtenerNivel() {
    int nivel;
    cout << "Seleccione nivel de dificultad:"<<endl;
    cout << "1. Principiante"<<endl;
    cout << "2. Intermedio"<<endl;
    cout << "3. Avanzado"<<endl;
    do {
        cout << "Ingrese su dificultad (1-3): "<<endl;
        cin >> nivel;
    } while (nivel < 1 || nivel > 3);
    return nivel;
}

int obtenerEleccionUsuario() {
    int eleccion;
    cout << "Elija su jugada:"<<endl;
    cout << "1. Piedra"<<endl;
    cout << "2. Papel"<<endl;
    cout << "3. Tijera"<<endl;
    do {
        cout << "Elija su jugada (1-3): ";
        cin >> eleccion;
    } while (eleccion < 1 || eleccion > 3);
    return eleccion;
}

int obtenerEleccionMaquina() {
    return (rand() % 3) + 1;
}

string convertirEleccion(int eleccion) {
    switch(eleccion) {
        case 1: return "Piedra";
        case 2: return "Papel";
        case 3: return "Tijera";
        default: return "Desconocido";
    }
}

int determinarGanadorRonda(int eleccionUsuario, int eleccionMaquina) {
    if (eleccionUsuario == eleccionMaquina) return 0;
    
    if ((eleccionUsuario == 1 && eleccionMaquina == 3) ||
        (eleccionUsuario == 2 && eleccionMaquina == 1) ||
        (eleccionUsuario == 3 && eleccionMaquina == 2)) {
        return 1; 
    }
    
    return 2;
}

void determinarGanadorJuego(int puntosUsuario, int puntosMaquina) {
    cout << "Fin del Juego"<<endl;
    cout << "Puntuación final:"<<endl;
    cout << "Usuario: " << puntosUsuario << " puntos"<<endl;
    cout << "Maquina: " << puntosMaquina << " puntos"<<endl;
    
    if (puntosUsuario > puntosMaquina) {
        cout << "Has ganado el juego"<<endl;
    } else if (puntosMaquina > puntosUsuario) {
        cout << "La maquina ha ganado el juego.\n";
    } else {
        cout << "Empate"<<endl;
    }
}

int main() {
    srand(time(0));
    
    cout << "Juego de Piedra, Papel o Tijera"<<endl;

    int nivel = obtenerNivel();

    int puntosUsuario = 0;
    int puntosMaquina = (nivel == 2) ? 1 : (nivel == 3) ? 2 : 0;
    
    cout << "\nPuntos iniciales:\n";
    cout << "Usuario: " << puntosUsuario <<endl;
    cout << "Maquina: " << puntosMaquina <<endl;
    
    // Jugar 5 rondas
    for (int ronda = 1; ronda <= 5; ronda++) {
        cout << "Ronda " << ronda <<endl;
        
        int eleccionUsuario = obtenerEleccionUsuario();
        int eleccionMaquina = obtenerEleccionMaquina();
        
        cout << "Tu eleccion: " << convertirEleccion(eleccionUsuario) <<endl;
        cout << "Eleccion de la maquina: " << convertirEleccion(eleccionMaquina) <<endl;
        
        int resultado = determinarGanadorRonda(eleccionUsuario, eleccionMaquina);
        
        if (resultado == 0) {
            cout << "Empate en esta ronda"<<endl;
        } else if (resultado == 1) {
            cout << "Ganaste esta ronda"<<endl;
            puntosUsuario++;
        } else {
            cout << "La maquina gana esta ronda."<<endl;
            puntosMaquina++;
        }
        
        cout << "Puntuacion actual - Usuario: " << puntosUsuario 
             << " Maquina: " << puntosMaquina <<endl;
    }
    
    determinarGanadorJuego(puntosUsuario, puntosMaquina);
}