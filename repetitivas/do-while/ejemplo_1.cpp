#include <iostream>
using namespace std;
int main()
{
int num=1, valor;
do
{
    cout<<num<<endl;
    num++;
} while (num<=10);
//validar para ingresar valores entre 1 y 10
do{
    cout<<"Ingresa un valor :"<<endl;
    cin>>valor;
    //condicicon
    (valor<10 ||valor>20)?cout<<"Valor no valido entres 10 y 20 ":cout<<"Exito"<<endl;//: significa para separar los valores de v o f
}while(valor < 10 || valor >20 );//si se cumple esta condicicon estara en dentro del bucle

cout<<"Ingresaste el valor de :"<<valor<<endl;

}

