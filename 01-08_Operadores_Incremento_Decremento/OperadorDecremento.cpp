#include <iostream>
using namespace std;

int main (int argc, char **argv){
    int limiteTentativasLogin = 10;

    // limiteTentativasLogin--;

    // int novoLimiteTentativasLogin = limiteTentativasLogin--;
    int novoLimiteTentativasLogin = --limiteTentativasLogin;

    cout << "Limite de tentativas de login: " << limiteTentativasLogin << endl;
    cout << "Novo limite de tentativas de login: " << novoLimiteTentativasLogin << endl;

}
