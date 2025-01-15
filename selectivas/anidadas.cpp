#include <iostream>
using namespace std;
int main ()
{
int a,b,c;
cout<<"ingrese valor 1:";
cin>>a;
cout<<"Ingrese el valor 2:";
cin>> b;
cout<< "Ingrese el valor 3:";
cin>> c;
if (a>b){
    if (a>c)

    {
        cout<<"El mayo es : "<<a<<endl;

    }else{
        cout<<"El mayor es:" <<c<<endl;
    }
    
} else{
    if(b>c){
        cout<<"El mayor es "<<b<<endl;

    }else{
        if(c>a){
            cout<<"El mayor es :"<<c<<endl;

        }else{
            cout<<"Son iguales"<<endl;
        }
    }
}
}