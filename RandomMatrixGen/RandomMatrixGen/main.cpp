#include <iostream>
#include <fstream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));
    ofstream fout("C:/Users/Иван/source/repos/MPI_L1/MPI_L1/input.txt");
    int n = 10, m = 10, k = 10;
    /*fout << n << '\n';
    fout << m << '\n';
    fout << k << '\n';*/
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            fout << (rand() % 101) << ' ';
        fout << '\n';
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < k; j++)
            fout << (rand() % 101) << ' ';
        fout << '\n';
    }

    return 0;
}
