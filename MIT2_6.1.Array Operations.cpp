#include <iostream>

using namespace std;

void printArray(const int arr[], const int len);

void printArray(const int arr[], const int len){//La funcion recibe como parametros el array y su tamaño
    for (int i=0; i<len; ++i){//Se crea un bucle hasta el final del array
        cout<<arr[i];
        if (i<len-1){//Se comprueba que no sea el ultimo contenido del array
            cout<<" , ";//Si se cumple, agrega una coma despues del elemento
        }
    }
}

int main(){
    int len=5;
    int arr[len]={1,2,3,4,5};
    printArray(arr,len);
    return 0;
}
