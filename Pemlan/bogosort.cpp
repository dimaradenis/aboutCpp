#include <iostream>  // Library untuk mendeklarasikan bahasa C++
#include <algorithm> // Library untuk mengambil fungsi algo
#include <stdlib.h>  //Library untuk menerapkan fungsi clearscreen

using namespace std;

struct data
{
    int code;
    string cause;
    int tahun;
    int kematian;
};

void shuffle(data data_CODI[], int n)
{
    int temp, r;
    for (int i = 0; i < n; i++)
    {
        data temp = data_CODI[i];
        r = rand() % n;
        data_CODI[i] = data_CODI[r];
        data_CODI[r] = temp;
    }
}

// CEK DATA APAKAH DATA SUDAH TERURUT BELUM
int isSorted_Code(data data_CODI[], int n)
{
    while (--n >= 1)
    {
        if (data_CODI[n].code < data_CODI[n - 1].code)
        {
            return 0;
        }
    }
    return 1;
}

// MENGURUTKAN DATA BERDASARKAN CODE
void bogosort_code(data data_CODI[], int n)
{
    while (!isSorted_Code(data_CODI, n))
    {
        shuffle(data_CODI, n);
    }
}

// CEK DATA APAKAH SUDAH TERURUT ATAU BELUM
int isSorted_Cause(data data_CODI[], int n)
{
    while (--n >= 1)
    {
        if (data_CODI[n].cause < data_CODI[n - 1].cause)
        {
            return 0;
        }
    }
    return 1;
}

// MENGURUTKAN DTA BERDASARKAN CAUSE
void bogosort_cause(data data_CODI[], int n)
{
    while (!isSorted_Cause(data_CODI, n))
    {
        shuffle(data_CODI, n);
    }
}

// CEK DATA APAKAH DATA SUDAH TERURUT BELUM
int isSorted_Tahun(data data_CODI[], int n)
{
    while (--n >= 1)
    {
        if (data_CODI[n].tahun < data_CODI[n - 1].tahun)
        {
            return 0;
        }
    }
    return 1;
}

// MENGURUTKAN DATA BERDASARKAN TAHUN
void bogosort_tahun(data data_CODI[], int n)
{
    while (!isSorted_Tahun(data_CODI, n))
    {
        shuffle(data_CODI, n);
    }
}

// CEK DATA APAKAH DATA SUDAH TERURUT BELUM
int isSorted_Kematian(data data_CODI[], int n)
{
    while (--n >= 1)
    {
        if (data_CODI[n].kematian < data_CODI[n - 1].kematian)
        {
            return 0;
        }
    }
    return 1;
}

// MENGURUTKAN DATA BERDASARKAN JUMPLAH KEMATIAN
void bogosort_Kematian(data data_CODI[], int n)
{
    while (!isSorted_Kematian(data_CODI, n))
    {
        shuffle(data_CODI, n);
    }
}

// TAMPILAN MENU
void Menu()
{
    cout << "\nSorting Berdasarkan : " << endl;
    cout << "1. Code" << endl;
    cout << "2. Nama " << endl;
    cout << "3. Tahun" << endl;
    cout << "4. Jumplah Kematian" << endl;
    cout << "5. Exit" << endl;
}
int main()
{
    int pilih;
    data data_CODI[10];

    // Deklarasi Data CODI
    data_CODI[0] = {10, "HIV AIDS", 2008, 771};
    data_CODI[1] = {130, "Intrakranial", 2004, 2554};
    data_CODI[2] = {90, "Banjir Bandang", 2010, 215};
    data_CODI[3] = {205, "Gagal Ginjal", 2005, 3047};
    data_CODI[4] = {149, "COVID-19", 2021, 121956};
    data_CODI[5] = {311, "KecelakaanL", 2004, 11204};
    data_CODI[6] = {238, "Gempa Bumi", 2005, 1801};
    data_CODI[7] = {617, "Septisemia", 2005, 2765};
    data_CODI[8] = {594, "Pneunomia", 2006, 2459};
    data_CODI[9] = {593, "Pneunomia", 2005, 2765};

// Menampilkan Data
home:
    system("CLS");
    cout << "---------------------------------" << endl;
    cout << " DATA CAUSE OF DEATH IN INDONESIA " << endl;
    cout << "---------------------------------" << endl;

    int n = 10;

    cout << "|CODE\tCAUSE\t\tTAHUN\tTOTAL KEMATIAN |" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "|" << data_CODI[i].code << ".\t" << data_CODI[i].cause << "\t" << data_CODI[i].tahun << "\t" << data_CODI[i].kematian << "|" << endl;
    }

    Menu();
    cout << "Pilih Menu (1/2): ";
    cin >> pilih;

    // EKSEKUSI PROGRAM DAN PENAMPILAN DATA
    switch (pilih)
    {
    case 1:
        system("CLS");
        bogosort_code(data_CODI, n);
        cout << " ---------------------------------" << endl;
        cout << " PENGURUTAN DATA BERDASARKAN CODE" << endl;
        cout << " ---------------------------------" << endl;
        cout << "|CODE\tCAUSE\t\tTAHUN\tTOTAL KEMATIAN |" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << "|" << data_CODI[i].code << ".\t" << data_CODI[i].cause << "\t" << data_CODI[i].tahun << "\t" << data_CODI[i].kematian << "|" << endl;
        }
        system("pause");
        goto home;
        break;
    case 2:
        system("CLS");
        bogosort_cause(data_CODI, n);
        cout << " ---------------------------------" << endl;
        cout << " PENGURUTAN DATA BERDASARKAN CAUSE" << endl;
        cout << " ---------------------------------" << endl;
        cout << "|CODE\tCAUSE\t\tTAHUN\tTOTAL KEMATIAN |" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << "|" << data_CODI[i].code << ".\t" << data_CODI[i].cause << "\t" << data_CODI[i].tahun << "\t" << data_CODI[i].kematian << "|" << endl;
        }
        system("pause");
        goto home;
        break;
    case 3:
        system("CLS");
        bogosort_tahun(data_CODI, n);
        cout << " ---------------------------------" << endl;
        cout << " PENGURUTAN DATA BERDASARKAN TAHUN" << endl;
        cout << " ---------------------------------" << endl;
        cout << "|CODE\tCAUSE\t\tTAHUN\tTOTAL KEMATIAN |" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << "|" << data_CODI[i].code << ".\t" << data_CODI[i].cause << "\t" << data_CODI[i].tahun << "\t" << data_CODI[i].kematian << "|" << endl;
        }
        system("pause");
        goto home;
        break;
    case 4:
        system("CLS");
        bogosort_Kematian(data_CODI, n);
        cout << " ----------------------------------------------------" << endl;
        cout << " PENGURUTAN DATA BERDASARKAN JUMPLAH KEMATIAN TERENDAH" << endl;
        cout << " ----------------------------------------------------" << endl;
        cout << "|CODE\tCAUSE\t\tTAHUN\tTOTAL KEMATIAN |" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << "|" << data_CODI[i].code << ".\t" << data_CODI[i].cause << "\t" << data_CODI[i].tahun << "\t" << data_CODI[i].kematian << "|" << endl;
        }
        system("pause");
        goto home;
        break;
    case 5:
        system("cls");
        cout << endl;
        cout << " -----------------------------------------------" << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "       TERIMAKASIH & SEMOGA SEHAT SELALU!!      " << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << " -----------------------------------------------" << endl;

        exit(0);
    }
}