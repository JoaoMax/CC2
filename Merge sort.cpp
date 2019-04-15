#include<stdlib.h>
#include<stdio.h>
#include <iostream>
// Mezcla dos subarreglos de arr[].
// El primer subarreglo es arr[l..m]
// El segundo subarreglo es arr[m+1..r]
void merge(int arr[], int l, int m, int r) //Recibe el arreglo, el inicio, el medio y el final del arreglo
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
    /* Creamos arrays temporales */
    int L[n1], R[n2];
    /* Copiamos los datos en los arreglos temporales L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];
    /* Mezclamos los arreglos temporales en arr[l..r]*/
    i = 0; // Indice inicial del primer subarray
    j = 0; // Indice inicial del segundo subarray
    k = l; // Indice inicial del subarray mezclado
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    /* Copiamos los elementos restantes de L[], si los hubiera*/
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    /* Copiamos los elementos restantes de R[], si los hubiera*/
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
/* l es para el indice izquierdo y r para el indice derecho del subarreglo del array que sera mezclado*/
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        // Igual que (l + r) / 2, pero evita el desbordamiento para grandes l y h
        int m = l+(r-l)/2;

        // Mezcla las primeras y segundas mitades
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);

        merge(arr, l, m, r);
    }
}
/* Funcion para imprimir el arreglo */
void printArray(int A[], int size)
{
    int i;
    for (i=0; i < size; i++)
        cout<<A[i]<<" ";
    cout<<"\n";
}
int main()
{
    int arr[] = {12, 11, 13, 5, 6, 7};
    int arr_size = sizeof(arr)/sizeof(arr[0]);

    printf("Given array is \n");
    printArray(arr, arr_size);

    mergeSort(arr, 0, arr_size - 1);

    printf("\nSorted array is \n");
    printArray(arr, arr_size);
    return 0;
}
