#include <iostream>
using namespace std;

int main (int argc, char **argv){
        int somaNumeros = 0;

        for (int i = 1; i <= 10; i++) {
            cout << "Digite um número par: ";
            int numero;
	    cin >> numero;

            if (numero % 2 == 0) {
                somaNumeros += numero;
            } else {
                i--;
            }
        }

        printf("Soma dos números pares: %d\n", somaNumeros);

}
