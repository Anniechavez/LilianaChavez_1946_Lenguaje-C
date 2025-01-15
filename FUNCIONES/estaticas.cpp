#include <iostream>
using namespace std;
float promedio ( float n)
{
static float suma =0;// el static sirve para que ese valor se mantega constante//tambien si se pone float suma se combierte en una variable constante pero si esta se iguala ha 0 me va arogar el mismo numero
suma= suma+n;
return suma;
}
main ()
{
    int i,n;
    float resultado;
    cout<<"Cuantas veces quieres llamar a la funcion promedio :";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        resultado=promedio(i);
    }
    cout<<"Resultado : "<<resultado<<endl;

}