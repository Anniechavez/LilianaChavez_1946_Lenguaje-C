#include <iostream>
using namespace std;
float gravedad =9.8;
void Funcion1 (int a)//recepta el parametro actual
{
    float gravedad =10.8;
cout<<"gravedad en Funcion1:"<<gravedad<<endl;
cout<<"Grvedad global "<<::gravedad<<endl; //::ambito local
cout<<"A:"<< a  <<endl; 
}
void Funcion2 (float x)
{
    float gravedad =10.8;
cout<<"gravedad en Funcion2:"<<gravedad<<endl;
cout<<"Grvedad global "<<::gravedad<<endl; //::ambito local
cout<<"X:"<< x  <<endl; 

}
main()
{
int num1= 10;
float num2 =20.5;
{
    char letra = 'A';
    cout<<"letra"<<letra<<endl;

}
cout<<"gravedad"<<gravedad<<endl;
Funcion1(num1);
Funcion2(num2);
}