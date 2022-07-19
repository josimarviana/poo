#include <iostream>
using namespace std;

int main (int argc, char **argv){
    bool compraaprovada = true;
    bool clientebloqueado = false;

    cout << compraaprovada << endl;
    cout << clientebloqueado << endl;


    int quantidadeestoque = 10;
    int quantidadepedidocompra = 15;

    bool estoquesuficiente = quantidadeestoque >= quantidadepedidocompra;
    cout << "Estoque suficiente: " << estoquesuficiente << endl;

}
