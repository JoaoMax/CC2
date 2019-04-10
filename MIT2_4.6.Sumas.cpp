#include <iostream >

using namespace std;
//Prototipos de Funciones
int sum( const int numbers[], const int numbersLen);
//SOLUCION:Implementar recursividad en la suma de cada miembro del array

int main() {
    int numbersLen = 5;
    int numbers[numbersLen]={1,2,3,4,5};
    cout<<sum(numbers,numbersLen);
    return 0;
}

int sum( const int numbers[], const int numbersLen) {
    if (numbersLen==0){
        return 0;
    }
    else{
        return numbers[0] + sum(numbers + 1, numbersLen -1);
    }
}
