#include <iostream>
using namespace std;
#include <iomanip>

int main (int argc, char **argv){
    char tipoNotaFiscal = 'P';
    double totalFaturado = 1200.30;

    cout << "Digite o tipo da Nota Fiscal (S) para serviços ou (P) para produtos: ";
    cin >> tipoNotaFiscal;
    /*
    double valorImpostos;

    if (tipoNotaFiscal == 'S') {
      valorImpostos = totalFaturado * 0.16;
    } else {
      valorImpostos = totalFaturado * 0.35;
    }
    */

    // double valorImpostos = tipoNotaFiscal == 'S' ? totalFaturado * 0.16 : totalFaturado * 0.35;

    double taxaImpostos = tipoNotaFiscal == 'S' ? 0.16 : 0.35;
    double valorImpostos = totalFaturado * taxaImpostos;

    cout << fixed << setprecision(2);
    cout << "Total faturado: R$ " << totalFaturado << endl;
    cout << "Valor dos impostos: R$ " << valorImpostos << endl;

}
