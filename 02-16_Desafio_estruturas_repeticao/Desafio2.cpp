#include <iostream>
using namespace std;

int main (int argc, char **argv){
        cout << "Digite um número positivo inteiro: ";
        int numero;
        cin >> numero;

        bool numeroPrimo = true;

        for (int i = 2; i < numero; i++) {
            if (numero % i == 0) {
                numeroPrimo = false;
                break;
            }
        }

        if (numeroPrimo && numero > 1) {
            printf("%d é um número primo", numero);
        } else {
            printf("%d não é um número primo", numero);
        }

}
