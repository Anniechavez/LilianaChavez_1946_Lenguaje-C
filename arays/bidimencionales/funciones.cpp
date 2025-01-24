#include <iostream>
using namespace std;
void llenarTabla(int tabla [][50],int f, int c)
{
for (int i=0;i<f;i++)
{
    for (int j=0;j<c;j++)
    {
        cout<<"Introduce el valor de la posicion [ "<<i<<"]["<<j<<"]:";
        cin>>tabla [i][j];
    }
}
}
void imprimirTabla()
{

}

main()
{
    int tabla [50][50],filsa,columnas;

}