#include <iostream>
#include <cstdlib> //Contiene algunas funciones matematicas
using namespace std;

int difference(const int x, const int y)
{
    int diff= abs(x-y);//abs(n) Retorna el valor absoluto de n
    //SOLUCION: Agregar el retorno de esta funcion
    return diff;
}

int main()
{
    cout<<difference(24,1238);
    return 0;
}
