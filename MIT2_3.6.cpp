#include <iostream>

using namespace std;

const int ARRAY_LEN= 10;

int main()
{
    int arr[ARRAY_LEN] = {10};//
    int *xPtr = arr;
    //SOLUCION: Que yPtr sea un puntero a arr+ARRAY_LEN-1
    int *yPtr = arr + ARRAY_LEN - 1;
    cout<<*xPtr<<' '<<*yPtr<<endl;//Deberia imprimir 10 0
    return 0;
}
