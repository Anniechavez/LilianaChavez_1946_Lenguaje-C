#include <iostream>
#include <vector>
using namespace std;
main()
{
    vector <int> datos;
    datos.push_back(10);
    datos.push_back(20);
    for (int i=0 ; i<datos.size();i++)
    {
    cout<< datos[i]<<"";
    }
    cout<<endl;
    for (auto x:datos)
    {
        cout<<x<<endl;
    }


    
}
