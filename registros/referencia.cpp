#include <stdio.h>
using namespace std;
main()
{
    int a;
    int *puntero;//cunado le piones un * es puntero
    puntero=&a;
    printf ("Ingresar un numero:");
    scanf("%d",&a);
    printf ("El numero ingresado es:%d",a);
    printf("El numero ingresadio es:%d",*puntero);
    return 0;
}