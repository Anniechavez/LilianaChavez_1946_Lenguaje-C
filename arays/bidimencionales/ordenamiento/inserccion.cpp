
//sumula a las cartas
#include <iostream>
#include <stdlib.h>
#include<time.h>
using namespace std;

void llenarvector(int v[],int n){
    srand(time(NULL));
    for(int i=0;i<n;i++){
        //v[i]=rand()%20+1;
        cin>>v[i];
    }
}
void verVector(int v[],int n){
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}

int ordenaInsercion(int v[],int n)
{
    int aux,cont=0,j;
    for(int i=1;i<n; i++)
    {
           aux=v[i];
           j=i-1;
           while (j>=0)
           {
            cont ++;
            if(aux < v[j])
            {
                v[j+1]=v[j];
                v[j]=aux;
            }
            j--;
           }
    return cont;
    }
}

main(){
int ne,comparaciones;
cout<<"Numeros de elemontos: ";
cin>>ne;
int vec[ne];
llenarvector(vec,ne);
cout<<"El vector original es: ";
verVector(vec,ne);
ordenaInsercion(vec,ne);

cout<<endl;
comparaciones = ordenaInsercion(vec,ne);
cout<<"Vector ordenado:"<<endl;
verVector(vec,ne);
cout<<"El numero de comparaciones es igual:"<<comparaciones;

}