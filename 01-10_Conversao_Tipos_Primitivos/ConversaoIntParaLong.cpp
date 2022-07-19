#include <iostream>
using namespace std;

int main (int argc, char **argv){
    int y = 102344;

    // long x = y;
    long x = (long) y; // instrução de casting é opcional

    cout << y << endl;
    cout << x << endl;

}
