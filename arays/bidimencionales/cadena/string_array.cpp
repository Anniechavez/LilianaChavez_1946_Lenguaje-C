#include <iostream>
using namespace std;
void cambiarString (string nombre )
{
    nombre= "Sin nombre";
    cout<<"Corrige tu nombre :";
    getline (cin,nombre);
}
void cambiarArray (char apellido [])
{
    /*apellido[0]='A';
     apellido[0]='L';
      apellido[0]='v';
       apellido[0]='a';
        apellido[0]='r';
         apellido[0]='e';
          apellido[0]='z';
           apellido[0]='\0';//caracter nulo para indicar el final de la cadena */
           cout<<"Ingresar el nuevo apellido:";
           cin.getline(apellido,20);

    

}

main()
{
    string nombre,apodo;
    string curso[5]={"c++","java","Python","c#","PHP"};//cadena de caracteres 
    char apellido [20],apodo1[20];
    cout<<"Ingrese su nombre :";
    getline(cin,nombre);
    cout<<"su nombre es :"<<nombre<<endl;
    cambiarString(nombre);
    cout<<"Su nombre es luego de llamar a la funcion :"<<nombre<<endl;
    cout<<"Su apellido es:"<<apellido<<endl;
    cin.getline(apellido,20);
    cambiarArray(apellido);
    cout<<"Su spellido es luego de llamar a la funcion :"<<nombre<<endl;

    /*cout<<"Ingrese su apellido:";
    cin.getline(apellido,20);
    cout<<"su nombre completo es:"<<nombre<<" "<<apellido<<endl;
    cout<<"su apodo es:"<<apellido<<endl;
    getline(cin,apodo);
    cout<<"su apodo es :"<<apodo<<endl;
    nombre=apodo;
    //apellido =apodo;//error no se puede asignar un string a un char*/



}