#include <iostream>
#include <fstream>
using namespace std;

int main() {
    
    ofstream archivoId;
    archivoId.open ("consolidados3.txt");
    if(archivoId.is_open())
    {
    archivoId<<"1"<<endl;
    archivoId<<"2"<<endl;
    archivoId<<"3"<<endl;
    archivoId<<"4"<<endl;
    
    archivoId.close();
    cout<<"Escrito cortrectamente"<<endl;
    }
    else{
        cout<<"El archivo no pudo abrirse"<<endl;
    }

    ofstream archivoProducto;
    archivoProducto.open("consolidados3.txt");
    if(archivoProducto.is_open())
    {
        archivoProducto<<"laptop"<<endl;
        archivoProducto<<"Maus"<<endl;
        archivoProducto<<"Teclado"<<endl;
        archivoProducto<<"Monitor"<<endl;

    archivoProducto.close();
    }

    else{
        cout<<"El archivo no puydo abrirse"<<endl;

    }

}
