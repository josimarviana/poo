#include <iostream>
using namespace std;

int main(int argc, char **argv) {
        bool digitarProximo = true;
        int somaNumerosPares = 0;
        int somaNumerosImpares = 0;

        do {
            printf("Digite um número: ");
            int numero;
	    cin >> numero;

            if (numero % 2 == 0) {
                somaNumerosPares += numero;
            } else {
                somaNumerosImpares += numero;
            }

            printf("Deseja digitar outro número? ");
            cin >> digitarProximo;
        } while (digitarProximo);

        printf("Soma dos números pares: %d\n", somaNumerosPares);
        printf("Soma dos números ímpares: %d\n", somaNumerosImpares);

}
