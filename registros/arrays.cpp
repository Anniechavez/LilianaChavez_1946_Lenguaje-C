#include <iostream>
#include <iomanip>
using namespace std;
struct estudiante
{
    int id;
    string nombre;
    float nota;

};
main ()
{
int ne;
//bandera
bool ordena=true;
float suma=0, promedio=0;
cout<<"Ingrese la cantidad de estudiantes:";
cin>>ne;
estudiante estudiantes[ne],aux;
for (int i=0;i<ne;i++)
{
    cout<<"ingresar el id del estudiante :"<<endl;
    cin>>estudiantes[i].id;
    cout<<"Ingresar el nombre del estudinante :";
    cin>>estudiantes[i].nombre;
    cout<<"Ingresar la nota del estudiante :";
    cin>>estudiantes[i].nota;

}
cout<<"Datoss ingresados:"<<endl;
/*cout<<"id\tnombre\tnota"<<endl;*/
cout<<setw(5)<<"ID"<<setw(5)<<"Nombres"<<setw(20)<<"Nota"<<endl;
for (int i=0;i<ne;i++)
{
    cout<<setw(3);
    cout<<"ingresar el id del estudiante :"<<setw(12);
    cout<<"Ingresar el nombre del estudinante :"<<setw(15);
    cout<<"Ingresar la nota del estudiante :"<<endl;
    suma +=estudiantes[i].nota;
}
cout<<"Promedio de nota ="<<(float)suma/ne<<endl;
cout<<"Listado de estudiantes de mayor de nota a menor nota:"<<endl;
//crear una variable auxiliar de tipo estudiante  (tipo struct )  para mover las notas de mayo ha menor 
//Aplicando el metodo de burbuja mejorado 
for (int i=0;i<ne;i++)
{
    ordena =false;
    for (int j = 0;j<ne;j++)
    if (estudiantes[j].nota < estudiantes[j+1].nota)
    {
        aux =estudiantes[j+1];
        estudiantes[j+1]=estudiantes[j];
        estudiantes[j]=aux;
        ordena=true;

    }
}
for (int i=0;i<ne;i++)
{
    cout<<"ingresar el id del estudiante :"<<endl;
    cin>>estudiantes[i].id;
    cout<<"Ingresar el nombre del estudinante :";
    cin>>estudiantes[i].nombre;
    cout<<"Ingresar la nota del estudiante :";
    cin>>estudiantes[i].nota;

}
}