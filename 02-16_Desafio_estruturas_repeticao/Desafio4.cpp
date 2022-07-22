#include <iostream>
using namespace std;

int main (int argc, char **argv){
        printf("Digite um número: ");
        int numeroOriginal;
        cin >> numeroOriginal;

        int numeroPendenteInversao = numeroOriginal;
        int numeroInvertido = 0;

        while (numeroPendenteInversao > 0) {
            int resto = numeroPendenteInversao % 10;
            numeroInvertido = numeroInvertido * 10 + resto;
            numeroPendenteInversao /= 10;
        }

        cout << "Inverso de " << numeroOriginal << " é " << numeroInvertido << endl;

}
