#include <iostream>
using namespace std;
    
int main (int argc, char **argv){
    double pesoCarga1 = 1033.49;
    double pesoCarga2 = 849.88;

    int pesoTotalCargas = (int) (pesoCarga1 + pesoCarga2);

    // O resultado deve ser 1883
    cout << "Peso total das cargas: " <<  pesoTotalCargas << endl;

}
