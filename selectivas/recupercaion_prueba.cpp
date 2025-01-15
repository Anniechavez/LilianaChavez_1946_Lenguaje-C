#include<iostream>
using namespace std;
main()
{
    char operacion;
    int a,b,resultado;
    cout<<"Ingrese la operacion que decea ejecutar (+,-,*,/):";
    cin >> operacion;
    cout<<"Ingresar un valor de a ";
    cin>>a;
    cout<<"Ingresar un valor de b";
    cin>>b;
    switch (operacion)
    {
    case '+' :
    resultado =a+b;
        cout<<"El resultado es"<<resultado<<endl;
        break;
        case '-':
        resultado = a-b;
    cout<<"El resultado es"<<resultado<<endl;
    break;
    case '*':
    cout<<"El resultado es"<<resultado<<endl;
    break;
    case '/':
    cout<<"El resultado es"<<resultado<<endl;
    break;
    
    }
    
    }
}