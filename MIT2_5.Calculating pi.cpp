#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h>
using namespace std;
double computePi(const int);

int main(){
    int n;
    cout<<"Cantidad de simulaciones: "<<endl;
    cin >> n;
    cout << computePi(n);
    return 0;
}

double computePi (const int n){
    srand(time(0));//Creamos la semilla
    int dartsInCircle = 0;//Creamos una variable para contar los dardos que caen dentro del circulo
    for(int i=0;i<n;++i){//Iniciamos un bucle que terminará en el número de simulaciones que hayamos decidido
        double x = rand() / (double)RAND_MAX, y = rand() / (double)RAND_MAX;//Definimos las coordenadas donde caeran los dardos. Se usa RAND_MAX para dar a las coordenadas un rango de 0 a 1
        if (sqrt(x*x + y*y)< 1){//Usando la formula euclideana de distancia para comprobar si un dardo se insertó dentro del circulo
            ++dartsInCircle;//Aumentamos el contador de dardos en uno
    }
}
return dartsInCircle / static_cast<double>(n) * 4;//Multiplicamos el proceso por 4 para completar los demas cuadrantes
}

//Hallamos Pi usando la formula el area del circulo (Area=Pi*radio¨2) osea que Pi=Area/radio¨2
