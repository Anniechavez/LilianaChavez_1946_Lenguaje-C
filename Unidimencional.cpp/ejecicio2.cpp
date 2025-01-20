#include <iostream>
#include <stdlib.h>//libreris para el uso rand 
#include <time.h>//libreria para el uso de tiem
using namespace std;
void llenaDato (int v[],int ne)
{
srand(time(NULL));//FINCION SEMILLLA PARA GENERAR NUMEROS
for (int i=0; i<ne;i++)
{
    v[i]=rand()%20+1;

}
}
void verDato (int v[], int ne)
{
    cout<<"Los elementos del vector son :"<<endl;
    for(int i=0; i<ne;i++)
    {
        cout<<v[i]<<" ";
    }
}
float sumaPromedioCifras(int v[], int ne)
{
    int suma=0;
    for(int i=0; i<ne;i++)
    {
        suma+=v[i];
    }
    return (float)suma/ne;

}
int contarDebajoPromedio(int v[], int ne, float promedio)
{
int contar =0;
for(int i=0; i<ne;i++)
{
    if(v[i]<promedio)
    {
        contar++;
    }
    return contar;
}

}

void guardaElementosMenores(int v [], int ne,float promedioNumeros, int lista [])
{
    int j=0;
    for(int i=0; i<ne;i++)
    {
        if (v[i]<promedioNumeros)
        {
            lista[i]=v[i];
            j++;

        }
    }

}
main()
{
    int ne,menores;
    float promedioNumeros;
    cout<<"Cuantos elementos tiene el vector?:";
    cin>>ne;
    int vector [ne];
    llenaDato(vector,ne);
    verDato(vector,ne);
    promedioNumeros=sumaPromedioCifras(vector,ne);
    cout<<"El promedio de los datos generados es:"<<promedioNumeros<<endl;
    menores=contarDebajoPromedio(vector,ne,promedioNumeros);
    cout<<"La cantidad de elementos de bajo del promedio son:"<<contarDebajoPromedio(vector,ne,promedioNumeros)<<endl;
    cout<<"los elemntos son:"<<endl;
    int listaMenores[menores];
    guardaElementosMenores(vector,ne,promedioNumeros, listaMenores);
    verDato(listaMenores, menores);



}