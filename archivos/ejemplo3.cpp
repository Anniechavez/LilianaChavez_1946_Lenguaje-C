//podemos usar fstream para leer y escribir en el mismo archivo.Este ejemplo pide al usuario una frase 
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    fstream archivo;
    string frase;

    cout<<"Escribe una frase para agregar el archivo: ";
    getline(cin,frase);

    archivo.open("ejemplo.txt",ios::out | ios::app);
    if(archivo.is_open()){
        archivo <<frase <<endl;
        archivo.close();
    }else{
        cout<<"No se puede abrir el archivo para escribir"<<endl;
        return 0;
    }

    archivo.open("ejemplo.txt",ios::in);
    if(archivo.is_open()){
        string llena;
        cout<<"Contenido del archico "<<endl;
        while(getline(archivo,llena)){
            cout<<llena<<endl;
        }
        archivo.close();
    }else{
        cout<<"No se puede abrir el archivo para escribir"<<endl;
       
    }
    return 0;
}
