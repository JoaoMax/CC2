#include <iostream>

using namespace std;
/*
void doubleNumber(int num){num=num*2;}

int main()
{
    int num=35;
    doubleNumber(num);
    cout<<num;
    return 0;
}
*/
//Solucion: El parametro de la funcion debe ser por referencia (int &num)
void doubleNumber(int &num){num=num*2;}

int main()
{
    int num=35;
    doubleNumber(num);
    cout<<num;
    return 0;
}
