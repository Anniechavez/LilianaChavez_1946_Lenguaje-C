#include<iostream>
#include<stdio.h>

using namespace std;
main()
{
    int num, r, l;
    cout <<"ingrese un numero";
    cin >> num;
    cout <<"ingrese un numero dividor";
    cin >>l;

    r= num %3;
    r=num%l;

    if (r==0)
    {
        cout << " el numero es multiplo de 3";
    }

    if (r== l)
    {
        cout << "el numero es multiplo de l ";
    }

    num= 0;

}