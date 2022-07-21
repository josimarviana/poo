#include <iostream>
using namespace std;

int main (int argc, char **argv){

    cout << "Digite um dia da semana (ex: 1 para dom, 2 para seg, 3, para ter, etc): ";
    int diaSemana;;
    string horarioFuncionamento;

    cin >> diaSemana;

    switch (diaSemana) {
      case 1:
        horarioFuncionamento = "Fechado";
        break;
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
        horarioFuncionamento = "08:00 às 18:00";
        break;
      case 7: 
        horarioFuncionamento = "08:00 às 12:00";
        break;
      default:
        horarioFuncionamento = "Dia inválido";
    }

    cout << "Horário de funcionamento: " << horarioFuncionamento << endl;

}
