#include <iostream>
#include <stdio.h>
using namespace std;
void swap1(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void bubbleSort(int arr[], int n) //Recibe de parametros un array y su tamaño
{
   int i, j;
   bool swapped;
   for (i = 0; i < n-1; i++)
   {
     swapped = false;
     for (j = 0; j < n-i-1; j++)
     {
        if (arr[j] > arr[j+1])
        {
           swap1(&arr[j], &arr[j+1]);
           swapped = true;
        }
     }
     if (swapped == false)// Si no hay dos elementos intercambiados por un bucle interno, se rompe
        break;
   }
}
void printArray(int arr[], int size)/* Funcion que imprime el arreglo */
{
    int i;
    for (i=0; i < size; i++)
        cout<<arr[i]<<" ";
    cout<<"n";
}
int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    printf("Arreglo ordenado: \n");
    printArray(arr, n);
    return 0;
}
