#ifndef GAME_LIBRARY_H
#define GAME_LIBRARY_H

#include <iostream>
#include <stdlib.h>
#include <time.h>

int generateRandomNumber(int min, int max) {
    return min + rand() % (max - min + 1);
}
bool isInRange(int number, int min, int max) {
    return number >= min && number <= max;
}
void printGameInstructions(int min, int max, int attempts) {
    std::cout << "Bienvenido al juego de adivinar números!" << std::endl;
    std::cout << "Tienes " << attempts << " intentos para adivinar" << std::endl;
    std::cout << "El número está entre " << min << " y " << max << std::endl;
}

#endif // GAME_LIBRARY_H