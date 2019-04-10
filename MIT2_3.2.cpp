#include <iostream>

using namespace std;
//Agregar un "int" en los parametros de la funcion printNum...
//...porque asi se evita usar variables globales ya que estas ocupan memoria todo el tiempo y no siempre se usan
void printNum(int number){cout<<number;};
//otra solucion es mover la declaracion "int number=35" a una variable global
int main()
{
    int number=35;
    printNum(number);
    return 0;
}
