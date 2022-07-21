#include <iostream>
using namespace std;

int main (int argc, char **argv){

    cout << "Avalie o nosso atendimento (1 a 5): ";
    int nota;
    cin >> nota;

    string descricaoNota;

    switch (nota) {
      case 1:
        descricaoNota = "Muito ruim";
        break;
      case 2:
        descricaoNota = "Ruim";
        break;
      case 3:
        descricaoNota = "Razoável";
        break;
      case 4:
        descricaoNota = "Muito bom";
        break;
      case 5:
        descricaoNota = "Excelente";
        break;
      default:
        descricaoNota = "Opção inválida";
    }

    /*
    if (nota == 1) {
      descricaoNota = "Muito ruim";
    } else if (nota == 2) {
      descricaoNota = "Ruim";
    } else if (nota == 3) {
      descricaoNota = "Razoável";
    } else if (nota == 4) {
      descricaoNota = "Muito bom";
    } else if (nota == 5) {
      descricaoNota = "Excelente";
    } else {
      descricaoNota = "Opção inválida";
    }
    */

    cout << "Sua nota foi: "<< nota << " - " << descricaoNota << endl;

}
