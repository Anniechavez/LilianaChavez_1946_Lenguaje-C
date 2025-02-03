#include <iostream>
using namespace std;

    bool isEncontrado(int v[],int n, int elemento)
    {
    int i;
    bool encontrado = false ;
    for(i=0;i<n;i++)
    {
        if (v[i]==elemento)
        {
            encontrado = true;
            break;
        }
    }
    return encontrado;
    }


    void llenarDatos (int v [],int n)
    {
        for (int i=0 ;i<n; i++)
        {
            v[i]=(i+1)*3;
        }
    }
void verElemento(int v[],int n)
{
    for (int i=0 ;i <n ; i++)
    {
        cout<<v[i]<<"\t";
    }
}

main()
{
int vector [5],dato;
llenarDatos(vector,5);
cout<<"Ingresar el dato que buscas :";
cin>>dato;
(isEncontrado(vector,5,dato))?cout<<"El elemnto esta en el array ": cout <<"El elemnto no existe ";

}