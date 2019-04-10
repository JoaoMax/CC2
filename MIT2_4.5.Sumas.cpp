#include <iostream >

using namespace std;
//Prototipos de Funciones
int sum( const int numbers[], const int numbersLen);
//SOLUCION: Usar un array para representar un varios numeros enteros

int main() {
    int numbersLen = 5;
    int numbers[numbersLen]={1,2,3,4,5};
    sum(numbers,numbersLen);
    return 0;
}

int sum( const int numbers[], const int numbersLen){
    int sum = 0;
    for (int i=0; i<numbersLen;i++){
        sum+=numbers[i];
        cout<<sum<<" ";
    }
    return sum;
}
