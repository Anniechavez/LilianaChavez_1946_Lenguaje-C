//programa para definir una tabla o matriz y acceder 
//a los elementos de la estructura
#include <iostream>
using namespace std;

main()
{
    int tabla [3][3];//declarando
    float pesos [2][3] ={ {1.2,3.4,5.6},{7.8,9.0,1.2} };
    cout<<pesos [0][0]<<endl;
    cout<<pesos [1][1]<<endl;
    for (int i=0;i<2;i++)
    {
        for (int j=0 ;j<3;j++)
        {
            cout<<pesos [i][j]<<"\t ";//para hacerle en una tabla
        }
    }
    cout<<endl;


}
