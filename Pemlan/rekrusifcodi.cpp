#include <iostream>
#include <string>

using namespace std;

// Fungsi rekursif untuk menampilkan data dalam array
void tampilData(int code[], int n, string cause[])
{
    if (n == 0) // Basis: jika n adalah 0, maka hentikan rekursi
        return;
    else
    {
        cout << code[n - 1] << ".\t" << cause[n - 1] << " " << endl;
        tampilData(code, n - 1, cause); // Panggil rekursi dengan n-1
    }
}

int main()
{
    int code[] = {1, 2, 3, 4, 5};                              // Array of numbers
    string cause[] = {"satu", "dua", "tiga", "empat", "lima"}; // Array of names

    int n = sizeof(code) / sizeof(code[0]); // Hitung jumlah elemen dalam array

    // Tampilkan data dalam array menggunakan fungsi rekursif
    tampilData(code, n, cause);

    return 0;
}
