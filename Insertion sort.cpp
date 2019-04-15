#include <math.h>
#include <stdio.h>
#include <iostream>
using namespace std;
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];//Almacenamos en la llave la variable que estamos comparando con el arreglo
        j = i - 1;

        /* Mueve elementos del arreglo desde 0 a i-1 que son mayores que la llave
         a una posicion adelante de su posicion actual*/
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
// Funcion para imprimir el arreglo
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout<<arr[i]<<" ";
    cout<<"\n";
}
int main()
{
    int arr[] = { 12, 11, 13, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, n);
    printArray(arr, n);

    return 0;
}
