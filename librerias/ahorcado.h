#include <iostream>
#include <string>
using namespace std;

void deportes(string deportes[]){
    string deportesx[5] = {"Futbol", "Tenis","Baloncesto","voley","Natacion"};
    for(int i = 0;i < 5;i++){
        deportes[i] = deportesx[i];
    }
}

void animales(string animales[]){
    string animalesx[5] = {"Perro","Gato","Conejo","Tigre","Leon"};
    for(int i = 0;i < 5;i++){
        animales[i] = animalesx[i];
    }
}

void frutas(string frutas[]){
    string frutasx[5] = {"Manzana","Naranja","Pera","Platana","Uva"};
    for(int i = 0;i < 5;i++){
        frutas[i] = frutasx[i];
    }
}

void dibujarHorcado(int intentos) {
    switch(intentos) {
        case 5:
            cout << "  +---+" << endl;
            cout << "  O   |" << endl;
            cout << "      |" << endl;
            cout << "      |" << endl;
            cout << "      |" << endl;
            cout << "=========" << endl;
            break;
        case 4:
            cout << "  +---+" << endl;
            cout << "  O   |" << endl;
            cout << "  |   |" << endl;
            cout << "      |" << endl;
            cout << "      |" << endl;
            cout << "=========" << endl;
            break;
        case 3:
            cout << "  +---+" << endl;
            cout << "  O   |" << endl;
            cout << " /|   |" << endl;
            cout << "      |" << endl;
            cout << "      |" << endl;
            cout << "=========" << endl;
            break;
        case 2:
            cout << "  +---+" << endl;
            cout << "  O   |" << endl;
            cout << " /|\\  |" << endl;
            cout << "      |" << endl;
            cout << "      |" << endl;
            cout << "=========" << endl;
            break;
        case 1:
            cout << "  +---+" << endl;
            cout << "  O   |" << endl;
            cout << " /|\\  |" << endl;
            cout << " /    |" << endl;
            cout << "      |" << endl;
            cout << "=========" << endl;
            break;
        case 0:
            cout << "  +---+" << endl;
            cout << "  O   |" << endl;
            cout << " /|\\  |" << endl;
            cout << " / \\  |" << endl;
            cout << "      |" << endl;
            cout << "=========" << endl;
            break;
    }
}
