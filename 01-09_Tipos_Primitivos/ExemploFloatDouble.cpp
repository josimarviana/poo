#include <iostream>
using namespace std;

int main (int argc, char **argv){
    double peso = 84.9d; // "d" é opcional
    cout << peso << endl;

    // float taxa = 1_294.93; // não compila
    float taxa = 1294.93f;
    cout << taxa << endl;
    return 0;
}
