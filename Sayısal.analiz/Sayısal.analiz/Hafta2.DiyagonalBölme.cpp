// Hafta2.DiyagonalBölme.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>

using namespace std;

const int MAX = 100;

void makenondiagonalzero(int mat[][MAX], int n, int m)
{
    // Traverse all non-diagonal elements
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i < j)

                // Change all non-diagonal
                // elements to zero
                mat[i][j] = 0;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i > j)

                // Change all non-diagonal
                // elements to zero
                mat[i][j] = 0;
        }
    }

    // print resultant matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int mat[][MAX] = { { 2, 1, 7 },
                       { 3, 7, 2 },
                       { 5, 4, 9 } };

    makenondiagonalzero(mat, 3, 3);
}

