#include <iostream >

using namespace std;
//Prototipos de Funciones
int sum( const int numbers[], const int numbersLen);

int main() {
    int numbersLen = 4;
    int numbers[numbersLen]={1,2,3,4,5};
    sum(3,5,7);
    return 0;
}

int sum( const int a, const int b, const int c=0, const int d=0) {
    return a+b+c+d;
}

int sum( const int numbers[], const int numbersLen){
    int sum = 0;
    for (int i=0; i<numbersLen;i++){
        sum+=numbers[i];
    }
    return sum;
}
