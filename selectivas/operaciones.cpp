#include <iostream>
using namespace std;
main()
{
    int n1,n2;
    char operador;
    cout<<"Ingrese dato 1 :";
    cin>>n1;
    cout<<"Ingresar dato 2 : ";
    cin>>n2;
    cout<<" Que operacion va ha realizar:<<+>>,<<->>,<<*>>,<</>>";
    cin>>operador;
    switch(operador)
    {
        case '+':
        cout<<"La suma de "<<n1<<"con"<<n2<<"="<<(n1+n2)<<endl;
        break;
        case '-':
        cout<<"La resta de "<<n1<<"con"<<n2<<"="<<(n1-n2)<<endl;
        break;
        case '*':
        cout<<"El producto de"<<n1<<"con"<<n2<<"="<<(n1*n2)<<endl;
        break;
        case '/':
        (n2==0)?cout<<"No esxite division por cero":cout<<"la division de"<<n1<<"con "<<n2<<"="<<(n1/n2)<<endl;
        break;
        default:
        cout<<"operador "<<operador<<"No valido"<<endl;
        break;

    }


}