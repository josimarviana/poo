#include <iostream>
using namespace std;

int main (int argc, char **argv){
    int totalDownloads = 10;

    // totalDownloads = totalDownloads + 1;
    // totalDownloads += 1;

    // totalDownloads++;

    // int novoTotalDownloads = totalDownloads++;
    int novoTotalDownloads = ++totalDownloads;

    cout << "Total de downloads: " << totalDownloads <<endl;
    cout << "Novo total de downloads: " << novoTotalDownloads << endl;
    return 0;
}
