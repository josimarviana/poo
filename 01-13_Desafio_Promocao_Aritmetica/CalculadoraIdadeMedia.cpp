#include <iostream>
#include <iomanip>
using namespace std;

int main (int argc, char **argv){
    int idade1 = 30;
    int idade2 = 40;
    int idade3 = 60;

    float idadeMedia = (idade1 + idade2 + idade3) / 3.0;

    cout << fixed << setprecision(2);
    cout << "Idade média: " << idadeMedia << endl;

}
