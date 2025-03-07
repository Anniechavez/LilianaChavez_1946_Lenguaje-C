#include <iostream>
#include <fstream>
using namespace std;
int main ()
{
    ofstream archivoSalida;
    archivoSalida.open("ejemplo.txt",ios::app);//Moatrar en un texto el ios::app es para añadir es para duplicar lo que nos muestra en el archivo plano 
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
