// Sayısal.analiz.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
using namespace std;

// Pascal üçgeni için matematik işlemlerinin yapıldığı fonksiyon
void triangle_pascal(int row_num) 
{
    // her satırın yazdırılması için döngü
    for (long n = 1; n <= row_num; n++)
    {
        // üçgensel çıktı için döngü
        for (int r = 1; r < row_num - n + 1; r++)
            cout << "  ";

        // pascal üçgeninin kombinasyon formullü ile çıktısı
        int val = 1;
        for (long r = 1; r <= n; r++) {
            cout << val << "   ";

            val = val * (n - r) / r;
        }
        cout << endl;
    }
}

int main() 
{
    cout << "\t\t\tPascal\'s triangle\n\n ";
    cout << "Enter the number of row :" << endl;

    long row_num;
    cin >> row_num;
    triangle_pascal(row_num);
    return 1;
}