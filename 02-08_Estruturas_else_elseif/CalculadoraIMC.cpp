#include <iostream>
using namespace std;

int main (int argc, char **argv){

    cout << "Peso: ";
    int peso;
    cin >> peso;

    cout << "Altura: ";
    double altura;
    cin >> altura;

    double imc = peso / (altura * altura);

    if (imc < 18.5) {
      cout << "Abaixo do peso ideal." << endl;
    } else if (imc < 25) {
      cout << "Peso ideal." << endl;
    } else if (imc < 30) {
      cout << "Acima do peso." << endl;
    } else if (imc < 35) {
      cout << "Obesidade grau I." << endl;
    } else if (imc < 40) {
      cout << "Obesidade grau II." << endl;
    } else {
      cout << "Obesidade grau III." << endl;
    }

    cout << "Fim do programa." << endl;

}
