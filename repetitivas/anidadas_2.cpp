#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
int main ()
{


bool entrada =true;
int op,cantNumeros,contador=0,nverificador, contverificador,suma;
while(entrada){
    cout<<"Menu de opciones"<<endl;
    cout<<"1.-Numeros abundantes"<<endl;
    cout<<"2.-numeros deficientes :"<<endl;
    cout<<"3.-Numeros amigos :" <<endl;
    cout<<"4.-salir"<<endl;
    cout <<"Ingresar una opcion :"<<endl;
    cin>>op;
    if(op>0&&op<4){//para ingresar numeros
        cout<<"Ingresarla cantidad de umeros"<<endl;
        cin>>cantNumeros;
        contador=0; //para que se cuente en cada opcion no solo en una
        nverificador=2;//verificar que sean abundantes, deficientes o amigos
    }
    switch(op){
        case 1:
        while(contador<cantNumeros)
        {//para contar los numeros
            contverificador=1;
            suma =0;
            while(contverificador<nverificador){
                if(nverificador % contverificador==0){
                    suma= suma + contverificador;
                }
                contverificador++;//para sumar uno
            }
            if(suma>nverificador){
                cout<<"Abundante :"<<nverificador<<endl;
                contador++;
            }
            nverificador++;
            }
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