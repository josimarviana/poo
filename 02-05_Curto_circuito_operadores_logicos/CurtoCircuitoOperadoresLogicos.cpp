#include <iostream>
using namespace std;

int main (int argc, char **argv){
    int x = 10;
    int y = 20;

    bool resultado = x == 15 && y++ == 20;
    // bool resultado = x == 15 || y++ == 20;

    cout << resultado << endl;
    cout << y << endl;

}
