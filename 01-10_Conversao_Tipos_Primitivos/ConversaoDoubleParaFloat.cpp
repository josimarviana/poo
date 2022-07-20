#include <iostream>
using namespace std;

int main (int argc, char **argv){
    double peso1 = 20.5;

    float peso2 = (float) peso1;

    cout << peso1 << endl;
    cout << peso2 << endl;


    float taxa1 = 934.5f;
    // double taxa2 = taxa1;
    double taxa2 = (double) taxa1; // instrução de casting é opcional

    cout << taxa1 << endl;
    cout << taxa2 << endl;
    return 0;
}
