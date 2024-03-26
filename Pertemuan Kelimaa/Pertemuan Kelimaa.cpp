// Pertemuan Kelimaa.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iostream>
using namespace std;

int bilangan1, bilangan2;

void inputdata()
{
    cout << "masukan bilangan pertama : ";
    cin >> bilangan1;
        cout << "masukan bilangan kedua : ";
    cin >> bilangan2;

}


int penjumlahan(int a, int b)
{
    return a + b;
}

int pengurangan(int a, int b)
{
    return a - b;
}

int perkalian(int a, int b)
{
    return a * b;
}

float pembagian(float a, float b)
{
    return a / b;

}
int main()
{
    int pilihan;

    do {
        cout << "kalkulator sederhana" << endl;
        cout << "********************" << endl;
        cout << "1. Penjumlahan" << endl;
        cout << "2. Pengurangan" << endl;
        cout << "3. Perkalian" << endl;
        cout << "4. Pembagian" << endl;
        cout << "5. Keluar" << endl;
        cout << "********************" << endl;
        cout << "Masukan Menu Pilihan : ";
        cin >> pilihan;
    
    switch (pilihan)
    {
    case 1:
        inputdata();
        cout << "Hasil Penjumlahan = " << penjumlahan(bilangan1, bilangan2) << endl;
        break;
    case 2:
        inputdata();
        cout << "Hasil Pengurangan = " << pengurangan(bilangan1, bilangan2) << endl;
        break;
    case 3:
        inputdata();
        cout << "Hasil Perkalian = " << perkalian(bilangan1, bilangan2) << endl;
        break;
    case 4:
        inputdata();
            cout << "Hasil Pembagian = " << pembagian(bilangan1, bilangan2) << endl;
        break;
    case 5:
        break;

    default:;
        cout << "pilihan Tidak Ada" << endl;
        break;

    }
       } while (pilihan !=5);

        system("pause");
        system("CLS");


