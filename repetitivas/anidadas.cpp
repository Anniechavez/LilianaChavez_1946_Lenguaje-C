#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
int main ()
{


bool entrada =true;
int op;
while(entrada){
    cout<<"Menu de opciones"<<endl;
    cout<<"1.-Numeros abundantes"<<endl;
    cout<<"2.-numeros deficientes :"<<endl;
    cout<<"3.-Numeros amigos :" <<endl;
    cout<<"4.-salir"<<endl;
    cout <<"Ingresar una opcion :"<<endl;
    cin>>op;
    switch(op){
        case 1:
        cout<<"En construccion";
        break;
        case 2:
        cout<<"Deficicentes";
        break;
        case 3:
        cout<<"Amigos";
        break;
        case 4:
        entrada =false;
        break;
        default :
        cout<<"Opcion no valida"<<endl;

    }
    cout<<"Presiona una tecla para contuniuar>>>>";//uso de una funcion para limpiar el sistema
    cin.ignore();//limpiar el baner
     getch();
    system("cls");//para limpiar el sistema

}



}