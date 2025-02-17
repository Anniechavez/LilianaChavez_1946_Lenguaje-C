#include <iostream>
using namespace std;
struct persona{
    string nombre="Sin nombre";
    int edad=0; 
    float estatura=0.0;
}p1,p2;
 void registro(){
    persona p5, p6;
 }
main(){
    /*typedef persona personas;
    typedef int entero;
    int a,b;
    entero c,d;*/
    persona p3,p4;
    p3.nombre="Carlos Ortiz";
    p3.edad=28;
    p3.estatura=1.90;
    cout << "Nombre: "<< p3.nombre << endl;
    cout << "Edad: "<< p3.edad << endl;
    cout << "Estatura: "<< p3.estatura << endl;
    cout << "Datos persona2: "<< endl;
    cout << "Nombre: ";
    getline(cin, p4.nombre);
    cout << "Edad: ";
    cin >> p4.edad;
    cout << "Estatura: ";
    cin >> p4.estatura;
    cout << "Nombre: "<< p4.nombre << endl;
    cout << "Edad: "<< p4.edad << endl;
    cout << "Estatura: "<< p4.estatura << endl;

}