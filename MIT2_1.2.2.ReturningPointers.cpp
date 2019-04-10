#include <iostream >
#include <cstdlib > // C standard library 3 // defines rand(), srand(), RAND_MAX
using namespace std;


int *getRandNumPtr() {
    int x = rand ();
    return &x;
}
int main() {
    int *randNumPtr = getRandNumPtr();
    cout << *randNumPtr; // ERROR
    return 0;
}
