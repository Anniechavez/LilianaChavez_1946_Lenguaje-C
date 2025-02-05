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

int ordenaburbuja(int v[],int n){
    
    int aux,cont=0;
    for(int i=0;i<n;i++){//NUMERO DE ELEMENTOS DE LAS PASADAS
        for(int j=0;j<n-1;j++){//Numero
            cont++;
            if(v[j]>v[j+1])
            {
                aux=v[j];
                v[j]=v[j+1];
                v[j+1]=aux;
            }
        }
        
    }
    return cont;
}

int ordenaburbujav2(int v[],int n){
    int mejora=1;
    int aux,cont=0;
    for(int i=0;i<n;i++){//NUMERO DE ELEMENTOS DE LAS PASADAS
        for(int j=0;j<n-mejora;j++){//Numero
            cont++;
            if(v[j]>v[j+1])
            {
                aux=v[j];
                v[j]=v[j+1];
                v[j+1]=aux;
            }
        }
        mejora++;
    }
    return cont;
}


int ordenaburbujav3(int v[],int n){
    int mejora=1;
    bool cambio=true;
    int aux,cont=0;
    for(int i=0;i<n && cambio;i++){//NUMERO DE ELEMENTOS DE LAS PASADAS
    cambio=false;
        for(int j=0;j<n-mejora;j++){//Numero
            cont++;
            if(v[j]>v[j+1])
            {
                aux=v[j];
                v[j]=v[j+1];
                v[j+1]=aux;
                cambio=true;
            }
        }
        mejora++;
    }
    return cont;
}

void muestravector(int v[],int n){
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}

main(){
int ne;
cout<<"Numeros de elemontos: ";
cin>>ne;
int vec[ne];
llenarvector(vec,ne);
cout<<"El vector original es: ";
muestravector(vec,ne);
cout<<endl;
cout<<"El numero de comparaciones brubujas v1 = "<<ordenaburbuja(vec,ne)<<endl;
cout<<"El numero de comparaciones burbujas v2= "<<ordenaburbuja(vec,ne)<<endl;
cout<<"El numero de comparaciones burbujas v3= "<<ordenaburbuja(vec,ne)<<endl;
cout<<"\nVector ordenado: "<<endl;
muestravector(vec,ne);
}