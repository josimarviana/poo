#include <iostream>
using namespace std;

int main(int argc, char **argv) {
    int quantidadeNumeros = 0;

    do {
      cout << "Quantidade de números: ";
      quantidadeNumeros;
      cin >> quantidadeNumeros;

      if (quantidadeNumeros < 6 || quantidadeNumeros > 15) {
        cout << "Quantidade de números deve ser entre 6 e 15." << endl;
      }
    } while (quantidadeNumeros < 6 || quantidadeNumeros > 15);

    int numeroAtual = 1;
    string numerosEscolhidos = "";

    do {
      printf("Número %d/%d: ", numeroAtual, quantidadeNumeros);
      int numeroEscolhido;
      cin >> numeroEscolhido;

      if (numeroEscolhido < 1 || numeroEscolhido > 60) {
        cout << "Número deve ser de 1 a 60";
      } else {
        numerosEscolhidos += to_string(numeroEscolhido) + " ";
        numeroAtual++;
      }
    } while (numeroAtual <= quantidadeNumeros);

    cout << "Números escolhidos: " << numerosEscolhidos << endl;

}
