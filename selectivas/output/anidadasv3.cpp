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
if(a>b&&a>c){
cout<<"El mayor es"<<a<<endl;
}else if(b>a&&b>c){
    cout<<"El mayor es:"<<b<<endl;
}else if(c>a && c>b){
    cout<<"El mayor es:"<<c<<endl;
}else if (a>b|| a>c){
    cout<<"El numero mayor es :"<<a<<endl;
}
else {
    cout<<"Son iguales"<<endl;

}

}


