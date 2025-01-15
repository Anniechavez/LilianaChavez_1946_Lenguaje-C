#include <iostream>
using namespace std;
int suma (int a, int b)
{
if (b==0)
return a;
else 
return a * suma (a + 1, b -1);


}
main()
{
int a, b;
cout <<" introduce el primer numero :";
cin >> a;
cout <<" Ingresar el segundo numero :";
cin >> b;
cout<< "La multiplicacion :"<< a << "es:"<< suma (a)<<endl;
}