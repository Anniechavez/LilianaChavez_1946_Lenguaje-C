#include <iostream>
using namespace std;
//Asi defino una estructura
struct persona
{
string nombre ="sin nombre";
int edad =0;
float estatura =0.0;
}p1,p2;
/*
void registro ()
{ 
    persona p5,p6;

}*/
main()
{
    /*typedef persona personas;
    typedef int entero ;*/
    
    persona p3,p4;//esto representa una varible de struct
    int p5, p6;//estos pertenecen al main
    cout<<"nombre"<<p1.nombre<<endl;
    cout<<"edad="<<p1.edad<<endl;
    cout<<"estatura="<<p1.estatura<<endl;

}