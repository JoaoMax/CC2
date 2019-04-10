#include <iostream>

using namespace std;

int stringLength( const char *str) {
    int length = 0;
    while (*(str + length) != '\0 ') {
        ++length;

    }
    return length;
}

int main(){
    char cadena;
    cout<<"Ingresar cadena: "; cin>>cadena;
    const char *str=&cadena;
    cout<<stringLength(str)<<endl;
    cout<<*str<<endl;
    cout<<cadena<<endl;
    cout<<str<<endl;
    return 0;
}
