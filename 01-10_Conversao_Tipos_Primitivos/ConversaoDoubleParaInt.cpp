#include <iostream>
using namespace std;

int main (int argc, char **argv){
    double largura = 100.37;
    // int tamanho = largura; // não compila

    int tamanho = (int) largura; // isso compila

    cout << tamanho << endl;

}
