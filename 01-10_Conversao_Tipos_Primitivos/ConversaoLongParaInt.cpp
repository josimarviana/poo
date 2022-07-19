#include <iostream>
using namespace std;

int main (int argc, char **argv){
    long x = 10;

    // int y = x; // não compila

    int y = (int) x;

    cout << x << endl;
    cout << y << endl;


    long a = 9300000035L;
    int b = (int) a;
    cout << a << endl;
    cout << b << endl;

}
