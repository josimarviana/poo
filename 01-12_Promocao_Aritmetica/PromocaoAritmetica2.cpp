#include <iostream>
using namespace std;

int main (int argc, char **argv){
    long x = 10;
    float y = 9.34f;
    // long z = x * y; // não compila
    float z = x * y;

    cout << z << endl;

}
