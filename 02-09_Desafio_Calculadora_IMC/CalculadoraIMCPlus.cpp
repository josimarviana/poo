#include <iostream>
using namespace std;

int main (int argc, char **argv){
    
    cout << "Peso: ";
    int peso;
    cin >> peso;

    cout << "Altura: ";
    double altura;
    cin >> peso;

    //limpa buffer
    setbuf(stdin, NULL);

    cout << "Sexo (1 para 'M' ou outro numero para 'F'): ";
    char sexo;
    cin >> sexo;

    if (sexo != '1') {
      sexo = 'F';
    } else {
      sexo = 'M';
    }

    double imc = peso / (altura * altura);

    if ((sexo == 'F' && imc < 19.1) || (sexo == 'M' && imc < 20.7)) {
      cout << "Abaixo do peso." << endl;
    } else if ((sexo == 'F' && imc <= 25.8) || (sexo == 'M' && imc <= 26.4)) {
      cout << "Peso ideal."<< endl;
    } else if ((sexo == 'F' && imc <= 27.3) || (sexo == 'M' && imc <= 27.8)) {
      cout << "Um pouco acima do peso."<< endl;
    } else if ((sexo == 'F' && imc <= 32.3) || (sexo == 'M' && imc <= 31.1)) {
      cout << "Acima do peso ideal."<< endl;
    } else {
      cout << "Obeso."<< endl;
    }

}
