// Hafta.2.DiyoganalBölme.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
using namespace std;

int main()
{
    const int MAX = 100;  //array için değer girişi

    int mat[][MAX] = { { 2, 1, 7 },   //matrix tanımlanması
                       { 3, 7, 2 },
                       { 5, 4, 9 } };

    for (int i = 0; i < 3; i++)         //  matrixin yazdırılması için döngü
    {     
        for (int j = 0; j < 3; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 0; i < 3; i++)           //arrayin içinde dolaşmak için ikili döngü, üst üçgen
    {         
        for (int j = 0; j < 3; j++) {
            if (i < j)                    //satır sayısının  sütün sayısından büyük olduğu yerlerde 0 yerleşimi
                mat[i][j] = 0;
             int upmat[3][3] = {};
             upmat[3][3] = mat[i][j];    //oluşan matrisi yeni matrise ata
             cout << upmat[3][3] << " "; 
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 0; i < 3; i++)           //alt üçgen için ikili döngü
    {      
        for (int j = 0; j < 3; j++) {
            if (i > j)
                mat[i][j] = 0;
            int downmat[3][3] = {};
            downmat[3][3] = mat[i][j];
            cout << downmat[3][3] << " ";
        }
        cout << endl;
    }

  
}


