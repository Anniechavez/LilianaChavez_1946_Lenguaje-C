#include <iostream>
#include <string.h>
using namespace std;

int comparacadenas(char cad1[],char cad2[]){
    return strcmp(cad1,cad2); //comparar cadenas
}
void copiaCadena(char cad1[],char cad2[]){
    strcpy(cad1, cad2);
    }

void anadeCadena(char cad1[],char cad2[]){
    strcat(cad1, cad2);
    }

bool alfabeticonumerico(char cad1[]){
    bool alfanumerico=true;
    for(int i=0;i<strlen(cad1);i++)
    if(isalnum(cad1[i])==false){
        alfanumerico=false;
        break;
    }
    return alfanumerico;
}

bool alfabetico(char cad1[]){
    bool alfa=true;
    for(int i=0;i<strlen(cad1);i++){
        if(isalpha(cad1[i]==false && isblank(cad1[i]==false))){
            alfa=false;
            break;
        }
    }
    return alfa;
}

bool numerico(char cad1[]){//
    bool numerico=true;
    for(int i=0;i<strlen(cad1);i++){
        if(isdigit(cad1[i]==false)){
            numerico=false;
            break;// este break rompe el bucle
        }
    }
    return numerico;
}

bool esespacio(char cad1[]){
    bool espacio=true;
    for(int i=0;i<strlen(cad1);i++){
        if(isspace(cad1[i]==false)){
            espacio=false;
            break;// este break rompe eñ bucle
        }
    }
}

bool esmayusculas(char cad1[]){
    bool mayuscula=true;
    for(int i=0;i<strlen(cad1);i++){
        if(isoper(cad1[i]==false)){
            mayuscula=false;
            break;// este break rompe eñ bucle
        }
    }

}

bool esminuscula(char cad1[]{
    bool minuscula=true;
    for(int i=0;i<strlen(cad1);i++){
        if(isoper(cad1[i]==false)){
            minuscula=false;
            break;// este break rompe eñ bucle
        }
    }


})
main(){
    int comparacion;
    char cad1[50],cad2[50];
    cout<<"Ingrese la primera cadena: ";
    cin.getline(cad1,50);
    cout<<"Ingrese la segunda cadena: ";
    cin.getline(cad2,50);
    comparacion=comparacadenas(cad1,cad2);
    cout<<"comparacion: "<<comparacion<<endl;
    (comparacion==0)?cout<<"Las cadenas son iguales":cout<<"Las cadenas son diferentes";
    //copiaCadena(cad1,cad2);
    //cout<<"\nCopia cadena c1 =" <<endl;
   // anadeCadena(cad1,cad2);
    //cout<<"\nCopia cadena c1 =" <<endl;
   // anadeCadena(cad1,cad2);
   (alfabeticonumerico(cad1))?cout<<"\nLa cadena"<<endl<<"es alfanumerica":cout<<"\nLa cadena"<<endl<<"No es alfanumerica: ";
   (alfabetico(cad1))?cout<<"\nLa cadena "<<endl<<"es alfanumerica":cout<<"\nLa cadena"<<endl<<"No es alfanumerica: ";
   (numerico(cad1))?cout<<"\nLa cadena"<<endl<<"es numerica":cout<<"\nLa cadena"<<endl<<"No es numerica: ";
   (esespacio(cad1))?cout<<"\nLa cadena"<<endl<<"tiene espacios":cout<<"\nLa cadena"<<endl<<"No tiene espacios: ";
}