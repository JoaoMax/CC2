#include <iostream >

using namespace std;
//Prototipos de Funciones
int sum( const int x, const int y, const int z);
int sum( const int a, const int b, const int c, const int d);

int main() {
    cout << "La suma entre 4 numeros es: "<<sum(1, 2, 3, 4)<<endl;
    cout << "La suma entre 3 numeros es: "<<sum(1, 2, 3)<<endl;
    return 0;
}

int sum( const int x, const int y, const int z) {
    return x+y+z;
}
int sum( const int a, const int b, const int c, const int d) {
    return a+b+c+d;
}
