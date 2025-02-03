#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;


    bool isBusquedaBinaria(int v[],int n, int elemento)
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
    srand (time (NULL));
    
        for (int i=0 ;i<n; i++)
        {
            v[i]=rand ()%20+1;
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
int ne, dato;
cout<<"Numero de datos de la array:";
cin>>ne;
int vector[ne];
llenarDatos(vector,ne);
cout<<"Ingresar el dato que buscas :";
cin>>dato;
(isBusquedaBinaria(vector,ne,dato))?cout<<"Dato encontrado ": cout <<"Dato no encontado";

}