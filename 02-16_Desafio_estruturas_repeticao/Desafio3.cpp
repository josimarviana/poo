#include <iostream>
using namespace std;

int main (int argc, char **argv){
        int somaNumeros = 0;

        while (somaNumeros < 100) {
            printf("Digite um número: ");
            int numero;
	    cin >> numero;

            somaNumeros += numero;
        }

        printf("Soma dos números: %d\n", somaNumeros);

}
