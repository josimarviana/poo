// Desejável: acima de 20 ng/ML
// Grupos de risco: 30 a 60 ng/mL

#include <iostream>
using namespace std;

int main (int argc, char **argv){

    cout << "Grupo de risco: ";
    bool grupoderisco;
    cin >> grupoderisco;

    cout << "Vitamina D: ";
    double vitaminad = 0.0;
    cin >> vitaminad; // nanograma por mililitro

    // bool vitaminadnormal = !grupoderisco && vitaminad > 20
    //     || grupoderisco && vitaminad >= 30 && vitaminad <= 60;

    // agrupando as expressões lógicas para melhorar a legibilidade
    bool vitaminadnormal = (!grupoderisco && vitaminad > 20)
        || (grupoderisco && vitaminad >= 30 && vitaminad <= 60);

    cout << "Vitamina D normal: " << vitaminadnormal << endl;

}
