// BOGO SORT
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// MENGECEK DATA SUDAH TERURUT ATAU BELUM
bool isSorted(int a[], int n)
{
    while (--n > 0)
        if (a[n] < a[n - 1])
            return false;
    return true;
}

// menghasilkan permutasi array
void shuffle(int a[], int n)
{
    for (int i = 0; i < n; i++)
        swap(a[i], a[rand() % n]);
}

// untuk mengurutkan data dengan bogo sort
void bogosort(int a[], int n)
{
    // Jika array belum urut kemudiaan acak lagi
    //  Ulang kembali menuju void shuffle
    while (!isSorted(a, n))
        shuffle(a, n);
}

// Display Array
void printArray(int a[], int n)
{
    cout << "-------------------------------------" << endl;
    cout << "DATA COUSE OF THE DEATH IN INDONESIA " << endl;
    cout << "-------------------------------------" << endl;
    for (int i = 0; i < n; i++)
        cout << a[i] << "\t|";
}

int main()
{
    int a[] = {110, 250, 305, 101, 1};
    int n = sizeof a / sizeof a[0];
    bogosort(a, n);
    cout << "Sorting Data Cause of Death in Indonesia  :\n";
    printArray(a, n);

    cout << "\n-------------------------------------" << endl;
    cout << "Keterangan :" << endl;
    cout
        << "1   - Tsunami Aceh" << endl;
    cout << "101 - Demam Berdarah Dengue" << endl;
    cout << "110 - Gempa Bumi" << endl;
    cout << "250 - Tetanus Neonatorium" << endl;
    cout << "305 - Letusan Gunung Api" << endl;
    return 0;
}
