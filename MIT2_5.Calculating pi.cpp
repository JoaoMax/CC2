#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h>
using namespace std;
double computePi(const int);

int main(){
    int n;
    cout<<"Digite un numero: "<<endl;
    cin >> n;

    cout << computePi(n);
    return 0;
}

double computePi (const int n){
    srand(time(0));
    int dartsInCircle = 0;
    for(int i=0;i<n;++i){
        double x = rand() / (double)RAND_MAX, y = rand() / (double)RAND_MAX;
        if (sqrt(x*x + y*y)< 1){
            ++dartsInCircle;
    }
}
return dartsInCircle / static_cast<double>(n) * 4;
}

