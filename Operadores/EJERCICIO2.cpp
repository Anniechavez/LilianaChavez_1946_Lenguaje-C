//uso de operdores ternarios
#include<iostream>
using namespace std;
main()
{
    int n1,n2, resultado,operacion;
    cout<<"ingrese un numero : ";
    cin>>n1;
    cout<<"ingrese un numero : ";
    cin>>n2;
    cout<< "1era forma:"<<endl;
    (n1>n2)?cout<<n1<<"es mayor que "<< n2 : cout<<n2<<"es mayor"<<n1;
    cout<<endl;
    cout<<"2da forma :"<<endl;
    resultado = (n1>n2)?n1/n2:n1%n2;
    cout<<"el resultado es :"<<resultado<<endl;
    operacion =(n1>n2)? true:false;
    if(operacion)
    cout<<"el resultado guarda la division de "<<n1<<"entre"<<n2<<endl;
    else
    cout<<"el resultado guarda el modulo de "<<n1<<"entre"<<n2<<endl;


}