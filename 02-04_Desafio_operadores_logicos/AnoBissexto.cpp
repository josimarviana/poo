#include <iostream>
using namespace std;

int main (int argc, char **argv){

    cout << "Ano: ";
    int ano = 0;
    cin >> ano;
    bool anoBissexto = ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0);

    cout << "Bissexto: " << anoBissexto << endl;

}
