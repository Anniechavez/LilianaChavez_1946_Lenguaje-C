#include <iostream>
using namespace std;

int main(){
    string nombre="Pedro";
    string apellido=("Perez");
    string inicial (1,'p');
    string cadena="Juan Jose Arturo";
    string nombre2(cadena,0,4);//sirve para extraer desde un indice inicial hasta un indice final solo cuenta el numero de caracteres
    cout<<"La longitud de nombre2 es: "<<nombre2.length()<<endl;
    inicial +="edro";
    cout<<inicial[0]<<endl;
    cout<<inicial;
    inicial= "\ncad";
    cout<<inicial<<endl;
    cout<<nombre2<<endl;

    return 0;
}