#include <iostream >

using namespace std;
//Prototipos de Funciones
int sum( const int x, const int y);
double sum( const double x, const double y);

int main() {
    double numero1, numero2, resultado;
    cout << "Ingrese un numero: "<<endl;
    cin >> numero1;
    cout << "Ingrese otro numero: "<<endl;
    cin >> numero2;
    resultado = sum(numero1, numero2);
    cout << "La suma entre " << numero1<<" y "<< numero2<<" es: "<<resultado;

    return 0;
}

int sum( const int x, const int y) {
return x + y;
}
double sum( const double x, const double y) {
return x + y;
}
