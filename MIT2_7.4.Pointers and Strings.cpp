#include <iostream>
#include <conio.h>

using namespace std;

//Prototipo de Funcion

void swap2(int **, int **);

int main(){
    int x=5, y=6;
    int *ptr1 = &x, *ptr2 =&y;
    cout <<"Direccion ptr1: "<<ptr1<<endl;
    cout <<"Direccion por referencia ptr1: "<<&ptr1<<endl;
    cout <<"Direccion ptr2: "<<ptr2<<endl;
    cout <<"Direccion por referencia ptr2: "<<&ptr2<<endl;
    swap2(&ptr1, &ptr2);
    cout << *ptr1 << ' '<<*ptr2;
    getch();
    return 0;
}

void swap2(int **x, int **y){
    int *tmp = *x;
    *x = *y;
    *y = tmp;
}
