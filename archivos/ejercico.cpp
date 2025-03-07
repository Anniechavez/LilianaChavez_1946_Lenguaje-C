#include <iostream>
#include <fstream>
using namespace std;
int main ()
{
    ofstream archivoSalida;
    archivoSalida.open("ejemplo.txt");//Moatrar en un texto el 
    if (archivoSalida.is_open ())
    {
        archivoSalida <<"Hola, Mundo"<<endl;
        archivoSalida<<"Estos es un prueba "<<endl;
        archivoSalida <<"Línea 3."<<endl;
        archivoSalida <<"Linea 4."<<endl;
        archivoSalida.close();
        cout<<"¿Texto escrito en el archivo con exito ."<<endl;

    }else {
        cout<<"Nose se pudo abrir el archivo."<<endl;

    }
    return 0;


}
