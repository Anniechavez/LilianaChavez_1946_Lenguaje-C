//crear un afuncion con datos aleatorios
#include <stdlib.h>
#include <time.h>
namespace vectorn {
    void llenarvector (int v[],int n , int ri=0, int rs=10 )
    {
    int i ;
    for (i=0;i<n;i++)
    {
        v [i]=rand ()%(rs-ri+1)+ri;
        //v[i]=ri + rand ()%(rs+1-ri);
        //variable=limite_inferior + randg()%(limire_superior +1- limite_iferior);


    }
}
}
