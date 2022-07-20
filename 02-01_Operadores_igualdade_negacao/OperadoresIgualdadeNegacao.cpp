#include <iostream>
using namespace std;

int main(int argc, char **argv) {
    // bool numerosIguais = 10 == 10;
    // bool numerosIguais = (4 + 6) == (5 * 2);

    int numero1 = 10;
    int numero2 = 11;
    // bool numerosIguais = numero1 == 10;
    bool numerosIguais = numero1 == numero2;

    // bool numerosDiferentes = !numerosIguais;
    // bool numerosDiferentes = !(numero1 == numero2);
    bool numerosDiferentes = numero1 != numero2;

    cout << "Números iguais: " << numerosIguais << endl;
    // cout << "Números iguais: " <<  numero1 == numero2 << endl;

    cout << "Números diferentes: " <<  numerosDiferentes << endl;

    string nome1 = "João";
    string nome2 = "José";

    bool nomesIguais = nome1 == nome2;

    cout << "Nomes iguais: " <<  nomesIguais << endl;

}
