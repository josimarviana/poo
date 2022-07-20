#include <iostream>
using namespace std;

int main(int argc, char **argv) {

    cout << "Cortisol: ";
    double cortisol;
    cin >> cortisol;

    // cortisol ideal é de 6 a 18.4
    bool resultadoNormal = cortisol >= 6.0 && cortisol <= 18.4;
    cout << "Cortisol normal: " <<  resultadoNormal << endl;

    bool resultadoAnormal = cortisol < 6.0 || cortisol > 18.4;
    cout << "Cortisol anormal: " <<  resultadoAnormal << endl;

}
