#include <iostream>
using namespace std;

int main (int argc, char **argv){
    int x = 3;
    int y = 2;

    // float z = x / y; // atribui 1.0
    // float z = (float) (x / y); // atribui 1.0
    float z = x / (float) y; // atribui 1.5

    cout << z <<endl;

}
