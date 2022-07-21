#include <iostream>
using namespace std;

int main (int argc, char **argv){
    int x = 10;
    int y = 20;

    // bool resultado = x == 13 && x == 15 || y == 20; // true
    // bool resultado = (x == 13 && x == 15) || y == 20; // true
    bool resultado = x == 13 && (x == 15 || y == 20); // false

    cout << resultado << endl;

}
