#include <iostream>

using namespace std;

int sum(const int x, const int y)
{
    return x+y;
}
//SOLUCION: Agregar una funciom "sum" que reciba 3 parametros y los sume
int sum(const int x, const int y, const int z)
{
    return x+y+z;
}

int main()
{
    cout<<sum(1,2,3);//Deberia imprimir 6
    return 0;
}
