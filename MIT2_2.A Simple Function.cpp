#include <iostream>

using namespace std;

void f(const int a=5)
{
    cout<<a*2<<"\n";
}

int a=123;
int main()
{
    f(1);//La funcion recibe 1 como parametro, despues lo multiplica por 2 y obtiene 2
    f(a);//La funcion recibe 123 como parametro, despues lo multiplica por 2 y obtiene 246
    int b=3;
    f(b);//La funcion recibe 3 como parametro, despues lo multiplica por 2 y obtiene 6
    int a=4;
    f(a);//La funcion recibe 4 como parametro, despues lo multiplica por 2 y obtiene 10
    f();//La funcion toma 5 como parametro al no haber enviado nada, depues lo multiplica por 2 y obtiene 10
    return 0;
}
