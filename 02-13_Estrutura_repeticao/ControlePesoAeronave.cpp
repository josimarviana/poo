#include <iostream>
using namespace std;
int main (int argc, char **argv) {

    cout << "Peso máximo da aeronave: ";
    int pesoMaximo;
    cin >> pesoMaximo;

    cout << "Quantidade de passageiros: ";
    int totalPassageiros;
    cin >> totalPassageiros;

    int pesoTotalPassageiros = 0;

    for (int passageiroAtual = 1; passageiroAtual <= totalPassageiros; passageiroAtual++) {
      cout << "Peso do passageiro " << passageiroAtual << ": ";
      int pesoPassageiro;
      cin >> pesoPassageiro;

      pesoTotalPassageiros += pesoPassageiro;
    }

    printf("Peso máximo da aeronave: %d kg\n", pesoMaximo);
    printf("Peso total dos passageiros: %d kg\n", pesoTotalPassageiros);
    printf("Situação da aeronave: %s\n", 
        pesoTotalPassageiros > pesoMaximo ? "peso excedido" : "liberada");

}
