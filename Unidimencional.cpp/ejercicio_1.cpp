#include <iostream>
using namespace std;
void llenaVector(int vector [] , int tamaño)
{for (int i=0; i <tamaño ;i++)
{
cout<<"El elemento es:"<<i+1<<":"<<endl;
cin>>vector [i];
}
}
void verVector(int vector [] , int tamaño)
{for (int i=0; i <tamaño ;i++)
{
cout<<"El elemento es:"<<i+1<<"del elemento"<<vector[i]<<endl;

}
}

main()
{
int ne;
cout<<"Cuantos elementos tiene el vector:";
cin>>ne;
int vector[ne];
llenaVector (vector,ne);
verVector (vector,ne);
}