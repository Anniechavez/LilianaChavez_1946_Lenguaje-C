#include <iostream>
using namespace std;
int factorial (int n)
{
    int resultado =1 ;
    for (int i= n; i >= 1;i++)
    resultado *=i;
    return resultado;

}

    int factorialr (int n)
{
    
    if (n==0)
    return 1;
    else 
    return n* factorialr(n-1);

}
main()
{
int numero ;
cout <<"ingresar un nemuro entero :";
cin >>numero;
cout <<"El factorial interactivo de:"<<numero <<"  es:"<<factorial(numero)<<endl;
cout<< "El factorial recurcivo de :"<<numero <<"  es :"<<factorialr (numero)<<endl;

}