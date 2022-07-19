#include <iostream>
using namespace std;

int main(int argc, char **argv) {
    int minhaidade = 40;
    int suaidade = 25;

    // Adição
    int totalidades = minhaidade + suaidade + 100;
    cout << "Soma das idades: " << totalidades << endl;

    // Subtração
    int diferencaidades = minhaidade - suaidade;
    cout << "Diferença das idades: " << diferencaidades << endl;

    // Multiplicação
    int dobrodaidade = 2 * suaidade;
    cout << "Dobro da sua idade: " << dobrodaidade << endl;

    // Divisão
    int metadedaidade = suaidade / 2;
    cout << "Metade da sua idade: " << metadedaidade << endl;

    // Módulo
    int restodivisao = 7 % 2;
    cout << "Resto da divisão (módulo): " << restodivisao << endl;
}
