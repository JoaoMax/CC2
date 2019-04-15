#include<stdio.h>
#include<iostream>
using namespace std;
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
/* Esta funcion toma el ultimo elemento como pivote, pone el elemento pivote
 en su correcta posicion mezclado en el array, y pone a todos los menores que
 el pivote a su izquierta y todos los mayores a su derechaer than pivot*/
int partition (int arr[], int low, int high)
{
    int pivot = arr[high];    // pivote
    int i = (low - 1);  // Indice del elemento mas pequeño

    for (int j = low; j <= high- 1; j++)
    {
        // Si el elemento actual es menor o igual que el pivote
        if (arr[j] <= pivot)
        {
            i++;    // Incrementa el indice del elemento pequeño
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
/* La funcion principal que implementa Quick Sort
 arr[] --> El arreglo a ser ordenado,
  low  --> Indice inicial,
  high  --> Indice final */
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        /* pi está dividiendo el índice, arr [p] ahora está en el lugar correcto */
        int pi = partition(arr, low, high);

        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
/* Funcion para imprimir el array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        cout<<arr[i]<<" ";
    cout<<"n";
}
int main()
{
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, n-1);
    printf("Sorted array: n");
    printArray(arr, n);
    return 0;
}
