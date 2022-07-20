#include <iostream>
using namespace std;

int main (int argc, char **argv){
    int x = 10;
    long y = 5;
    // int z = x * y; // não compila
    long z = x * y;

    cout << z << endl;
    return 0;
}
