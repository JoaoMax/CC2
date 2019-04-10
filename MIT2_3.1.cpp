#include <iostream>

using namespace std;

void printNum(int number);

int main()
{
    printNum(35);
    return 0;
}

void printNum(int number){cout<<number;}

//Se soluciona declarando una funcion prototipo para printNum antes del main()
//Otra solucion es mover toda la funcion printNum antes del main()
