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

int ordenaSeleccion(int v[],int n){
    
    int aux,cont=0;
    bool cambios=true;
    for(int i=0; n-1 && cambios ; i++)
    {
        cambios=false;
        for(int j=i+1;j<n;j++){
            cont ++;
            if(v[i]>v[j])
            {
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
                cambios=true;
            }
        }
        
    }
    return cont;
}



main(){
int ne,comparaciones;
cout<<"Numeros de elemontos: ";
cin>>ne;
int vec[ne];
llenarvector(vec,ne);
cout<<"El vector original es: ";
verVector(vec,ne);
ordenaSeleccion(vec,ne);

cout<<endl;
comparaciones = ordenaSeleccion(vec,ne);
cout<<"Vector ordenado:"<<endl;
verVector(vec,ne);
cout<<"El numero de comparaciones es igual:"<<comparaciones;

}