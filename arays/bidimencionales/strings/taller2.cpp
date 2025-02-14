#include <iostream>
using namespace std;
main(){

    string cadena1=("Informatica");//inicializar un string
    string cadena4;
    const char *auxiliar;

    //Metodo constructor
    string cadena2(cadena1);//cadena2=cadena1  

    //Metodo de relleno
    string cadena3(10,'*');
    cout<<cadena3<<endl;

    //Metodo constructor de iteracion
    //usando cadena.beging

    //metodo para añadir usando push.back
    cadena1.push_back('x');//solo permite usar un solo caracter
    cout<<cadena1<<endl;

    //meto para modificar los caracteres de una cadena y acceder FORMA2:cadena[0]
    cadena1.at(0)='i';
    cout<<cadena1<<endl;

    //usando el metodo front y back para cambiar los caractere inicio y final
    cadena1.front()='i';
    cadena1.back()='A';
    cout<<cadena1<<endl;

    //para convertir un array de tipo string a tipo array char
    auxiliar=cadena1.c_str();//obliga poner como constante porque el char no cambia
    cout<<"auxiliar array char: "<<auxiliar<<endl;

    //para saber si la cadena esta vacia se usa el empty
    (cadena4.empty())?cout<<"Cadena Vacia\n":cout<<"Cadena no vacia\n";
    //tamaño maximo de caracteres que puede almacenar la cadena
    cout<<"Tamano maximo: "<<cadena1.max_size()<<endl;
    //capacidad de la cadena en bytes del objeto que ocupa actualmenyte
    cout<<"Capacidad "<<cadena1.capacity()<<endl;
    //usando el metodo compare para comparar dos cadenas 
    cout<<"cad1"<<cadena1<<"cad2"<<cadena2<<endl;
    cadena1 = "Mola";//esta es mayor ya que alfabeticamente es mayor que la "H" INDEPENDIENTEMENTE si esta en mayusculas o minusculas solo se determina por el primer caracter
    cadena2 = "Holas";
    int comparacion= cadena1. compare(cadena2);
    cout<<"compacion:"<<comparacion<<endl;
    int encontrado =cadena1. find( " cos ");
    cout<<"encontrado = "<<encontrado;
    (cadena1.find( " cos ")== string :: npos )? cout<< "Noencontradop ":cout<<"encontado";//string :: npos axeder a una constante como "string namespace std" o una libreria o llamar esta constante 
    //remplace (6,5,"la lista") o tambien remplace (pos ,size ,porcion.subtr(0.size));

   
}