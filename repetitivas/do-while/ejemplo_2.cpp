#include <iostream>
#include <stdlib.h>
#include<conio.h>
using namespace std;
 main()
{
    int op;
    
    
    do{
        cout<<"Muenu de opciones :"<<endl;
        cout<<"1. Abundantes"<<endl;
        cout<<"2. Deficientes"<<endl;
        cout<<"3. Amigos:"<<endl;
        cout<<"4. Salir :"<<endl;

        cout<<"Escoja una opcion :"<<endl;
        cin>>op;
        if(op<1|| op>4 )
        cout<<"Opcion no valida"<<endl;
         system("pause");
    system("cls");

        

    }
    while(op <1 || op>4);
    switch(op)
    {
    case 1:
    cout<<"Abundantes";
    break;
    case 2:
    cout<<"Deficiente";

    break;
    case 3:
    cout<<"Amigos";
    break;
    case 4:
    cout<<"Saliendo del sistema :";
    if(op==4)
    break;
    
    }
    


    
}

