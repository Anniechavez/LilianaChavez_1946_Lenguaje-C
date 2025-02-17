#include <iostream>
#include "strings.h"
using namespace std;
main ()
{
    string palabras;
    cout<<"Ingresar una palabra:";
    getline(cin, palabras);
    reemplazar (palabras);
    cout<<"La cadena final es:"<< palabras<<endl;


}
