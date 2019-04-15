#include <iostream>

using namespace std;

void swap1 (int *x, int *y) {//Los parametros que recibe son direcciones de memoria
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

int main(){
    int x;
    cout<<"Ingresar valor de x: "; cin>>x;
    int y;
    cout<<"Ingresar valor de y: "; cin>>y;
    cout<<"Valor de x antes del cambio: "<<x<<endl;
    cout<<"Valor de y antes del cambio: "<<y<<endl;
    swap1(&x,&y);
    cout<<"Valor de x despues del cambio: "<<x<<endl;
    cout<<"Valor de y despues del cambio: "<<y<<endl;
    return 0;
}

