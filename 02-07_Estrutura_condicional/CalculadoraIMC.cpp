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
    }

    if (imc >= 18.5 && imc < 25) {
      cout << "Peso ideal." << endl;
    }

    if (imc >= 25 && imc < 30) {
      cout << "Acima do peso." << endl;
    }

    if (imc >= 30 && imc < 35) {
      cout << "Obesidade grau I." << endl;
    }

    if (imc >= 35 && imc < 40) {
      cout << "Obesidade grau II." << endl;
    }

    if (imc >= 40) {
      cout << "Obesidade grau III." << endl;
    }

    cout << "Fim do programa." << endl;

}
