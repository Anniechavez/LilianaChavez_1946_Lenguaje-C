#include<iostream>
using namespace std;
main()
{
    int valor, promedio =0, contador=0;
    char op='s';
    bool bandera = false;
    while( bandera ){
        cout<<"Deseas ingresar valores <<s>> <<n>> :";
        op = getchar();//solo para ingresar un valor
        if (op == 's'||op=='s'){
            cout<<"Ingresar un valor";
            cin>>valor;
            contador++;
            promedio=promedio + valor;
        }
        else{
            bandera = true;
        }
        cin.ignore();//limpar el vaper

    }
    cout<<"El promedio de datos ingresados es "<<((float)promedio/contador)<<endl;

}