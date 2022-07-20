#include <iostream>
using namespace std;

int main(int argc, char **argv) {
    int pesoProdutos = 900;
    int limitePesoCaminhao = 1000;

    bool cargaExcedida = pesoProdutos > limitePesoCaminhao;
    cout << "Carga excedida: " << cargaExcedida << endl;

    // bool cargaLiberada = pesoProdutos < limitePesoCaminhao;
    // bool cargaLiberada = pesoProdutos <= limitePesoCaminhao;
    bool cargaLiberada = limitePesoCaminhao >= pesoProdutos;
    cout << "Carga liberada: " <<  cargaLiberada << endl;    

}
