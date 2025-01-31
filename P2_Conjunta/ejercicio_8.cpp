
#include <iostream>
using namespace std;
string identificarTipoCadena(char cadena[]) {
    bool tieneNumeros = false;
    bool tieneLetras = false;

    for(int i = 0; cadena[i] != '\0'; i++) {
        if(cadena[i] >= 48 && cadena[i] <= 57) {
            tieneNumeros = true;
        }
        else if((cadena[i] >= 65 && cadena[i] <= 90) || 
                (cadena[i] >= 97 && cadena[i] <= 122)) {
            tieneLetras = true;
        }
        else {
            return "Cadena no valida";
        }

        if(tieneNumeros && tieneLetras) {
            return "Alfanumerica";
        }
    }

    if(tieneNumeros && !tieneLetras) {
        return "Numerica";
    }
    else if(!tieneNumeros && tieneLetras) {
        return "Alfabetica";
    }
    
    return "Cadena vaca";
}

int main() {
    char cadena1[] = "123456";
    char cadena2[] = "abcdef";
    char cadena3[] = "abc123";
    char cadena4[] = "abc123";
    
    cout << "Cadena '123456' es: " << identificarTipoCadena(cadena1) << endl;
    cout << "Cadena 'abcdef' es: " << identificarTipoCadena(cadena2) << endl;
    cout << "Cadena 'abc123' es: " << identificarTipoCadena(cadena3) << endl;
    cout << "Cadena 'abc123' es: " << identificarTipoCadena(cadena4) << endl;
    
    return 0;
}