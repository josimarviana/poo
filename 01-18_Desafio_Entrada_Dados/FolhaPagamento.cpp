#include <iostream>
using namespace std;

int main(int argc, char **argv) {
  
      cout << "Nome: ";
      string nome;
      cin >> nome;
  
      cout << "Valor por hora: ";
      double valorhora;
      cin >> valorhora;
  
      cout << "Horas trabalhadas: ";
      int horastrabalhadas;
      cin >> horastrabalhadas;
  
      cout << "Valor dos descontos: ";
      double valordescontos;
      cin >> valordescontos;
  
      double valortotaltrabalhado = valorhora * horastrabalhadas;
      double valortotaldevido = valortotaltrabalhado - valordescontos;
  
      printf("\nFolha de pagamento: %s\n", nome.c_str());
      printf("%d horas x R$%.2f = R$%.2f\n", 
          horastrabalhadas, valorhora, valortotaltrabalhado);
      printf("Descontos: R$%.2f\n", valordescontos);
      printf("Total devido: R$%.2f\n", valortotaldevido);
  
  }
