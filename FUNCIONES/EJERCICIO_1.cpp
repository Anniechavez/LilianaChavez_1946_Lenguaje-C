#include<iostream>
using namespace std;
int mayor(int a, int b );
float promedio ( int a, int b);
void saludo (int hora);
main()
    {
int n1,n2,hora;
cout<<"Ingresa tres numeros : ";
cin >>n1>>n2>>hora;
cout<<"El mayor es:" <<mayor (n1,n2)<<endl;
cout<<"El promedio es :"<<promedio(n1, n2)<<endl;
saludo (hora);

    }
    //implementar el cuerpo de la funcion
    int mayor (int a, int b)

    {
    if (a>b)
    return a;
    else
    return b;
    }
    float promedio ( int n1, int n2)
    {

return (n1+ n2) / 2.0;

    }
    void saludo ( int hora )
    {
        if (hora < 12)
        cout<<"Buenos dias " <<endl;
        else if (hora <19)
        cout<<"BUENAS TARDES "<<endl;
        else
        cout<<"Buenas noches"<<endl;
    }

    