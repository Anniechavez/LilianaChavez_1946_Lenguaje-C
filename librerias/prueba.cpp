//ingresa el rango de valores valores randomicos entre que rango de valores quieres generar tu numero adivina un numero ordenar los numeros el rango de numeros sacar un numro rando micamente indicar que el numero que ingresosi es el corrwecto o no y darle pistas para adivinar el numero solo tiene 3 opotunidades 
//primero preguntar entre que rango de numeros quieres generar el juego estos mismos van hacer randomicos despues generar ese rango de numeros luego la compuatdora tiene que elejir un valor de ese rango para poder nosotros adivinar tenemos 3 oprtunidades entoonces nosotros colocamos un valor y si es correcto poner has ganado y si no que nos de pistas del numero si es mayo o menor que el numero que le porpocionamos 
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "lilianaChavez.h"

class NumberGuessingGame {
private:
    int targetNumber;
    int minRange;
    int maxRange;
    int attempts;

public:
    NumberGuessingGame(int min, int max) : 
        minRange(min), 
        maxRange(max), 
        attempts(3) {
        srand(time(nullptr));
        
        targetNumber = generateRandomNumber(minRange, maxRange);
    }

    int generateRandomNumber(int min, int max) {
        return min + rand() % (max - min + 1);
    }

    bool playRound(int guess) {
        attempts--;

        if (guess == targetNumber) {
            std::cout << "¡Has ganado!" << std::endl;
            return true;
        }

        if (attempts > 0) {
            if (guess < targetNumber) {
                std::cout << "El numero es mayor." << std::endl;
            } else {
                std::cout << "El numero es menor." << std::endl;
            }
            std::cout << "Te quedan " << attempts << " intentos." << std::endl;
        } else {
            std::cout << "¡Agotaste tus intentos! El numero era " << targetNumber << std::endl;
        }

        return false;
    }

    bool isGameOver() {
        return attempts == 0;
    }
};

int main() {
    int min, max;
    std::cout << "Ingrese el rango minimo: ";
    std::cin >> min;
    std::cout << "Ingrese el rango maximo: ";
    std::cin >> max;

    NumberGuessingGame game(min, max);

    while (!game.isGameOver()) {
        int guess;
        std::cout << "Adivina el numero: ";
        std::cin >> guess;

        if (game.playRound(guess)) {
            break;
        }
    }

    return 0;
}