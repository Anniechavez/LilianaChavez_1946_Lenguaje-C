#include <iostream>
using namespace std;
struct persona{
    string nombre;
    int edad;
    float estatura;

};
void lleRegistro(persona per1)
{
    cout<<"Ingresar nombre:";
    getline(cin,per1.nombre);
    cout<<"Ingrese su edad ";
    cin >>per1.edad;
    cout<<"Ingresar su estaturra ;";
    cout<<per1.estatura;


}
void mostarRegistro(persona per1)
{
    cout<<"Nombre :"<<per1.nombre<<endl;
    cout<<"Edad"<<per1.edad<<endl;
    cout<<"Estatura"<<per1.estatura<<endl;

}
main()
{
    persona p1={"",0,0};
    lleRegistro(p1);
    mostarRegistro(p1);

}