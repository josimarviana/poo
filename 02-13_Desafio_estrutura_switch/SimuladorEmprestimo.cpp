#include <iostream>
using namespace std;
#include <iomanip>

int main (int argc, char **argv){

    cout << "Valor do empréstimo: ";
    double valorEmprestimo;
    cin >> valorEmprestimo;

    cout << "Quantidade de parcelas: ";
    int quantidadeParcelas;
    cin >> quantidadeParcelas;

    double taxaJuros;
   switch (quantidadeParcelas) {
	    case 1 : taxaJuros= 1.99; break;
	    case 2 : taxaJuros= 1.99; break;
	    case 3 : taxaJuros = 2.99; break;
	    default : taxaJuros = 3.99;
    };

    double tarifaFixa = valorEmprestimo < 100 ? 0 : 1.5;
    double totalJuros = valorEmprestimo * (taxaJuros / 100 * quantidadeParcelas);
    double custoTotal = valorEmprestimo + tarifaFixa + totalJuros;
	
    printf("Tarifa fixa: R$%.2f\n", tarifaFixa);
    printf("Total de juros: R$%.2f\n", totalJuros);
    printf("Custo total: R$%.2f\n", custoTotal);

}
