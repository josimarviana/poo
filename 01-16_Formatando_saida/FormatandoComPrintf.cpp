#include <iostream>
using namespace std;
#include <iomanip>

int main (int argc, char **argv){
    string nome1 = "Felipe";
    cout << "Olá " << nome1 << endl;

    int quantidade = 48;
    cout << "Quantidade: " <<  quantidade << " itens";

    double peso = 938.22;
    cout << fixed << setprecision(2) << endl;
    cout << "Peso: " << peso << endl;
    return 0;
}
