/* Program Tebak Kata
    by : Hugo Irwanto
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define BATAS_BAWAH 0 // set batas bawah
#define BATAS_ATAS 50 // set batas atas

void tebakAngka(void);
void mainLagi(void);

int main()
{
    tebakAngka();
    mainLagi();

    printf("\n");
    system("pause");

    return 0;
}

void tebakAngka(void)
{
    int magic_no = 0, tebakan = 0, flag = 1, countNum = 0;

    srand(time(NULL));          // random seed oleh komputer
    magic_no = rand() % 50 + 1; // tebak angka dari 1 - 50

    printf("\t\t\tBina Nusantara University\n\n"); // Nama Universitas
    printf("==========================================\n");
    printf("Nama : Hugo Irwanto \nNIM  : 2001671875\n"); // Identitas
    printf("==========================================\n");
    printf("Program Tebak Angka \n \n"); // Nama Program
    printf("==========================================\n");

    while (flag)
    {
        // validasi
        while (printf("Coba Tebak Angka yang saya pikirkan (1-50)? ") && scanf("%d", &tebakan) != 1)
        {
            int c;
            if (feof(stdin) || ferror(stdin))
                return EOF;
            printf("-> Anda Salah Format, Silahkan Coba Lagi! <-\n\n");
            while ((c = getchar()) != EOF && c != '\n')
                ;
            if (c == EOF)
                return EOF;
        }
        if (tebakan > BATAS_BAWAH && tebakan <= BATAS_ATAS) // Proses tebak angka         {             if (magic_no == tebakan)             {                 printf("Hebat! Tebakan Anda Benar!\n"); //Statement jika jawaban benar                 flag = 0;             }             else             {                 countNum++; //jika jawaban salah                 printf("Tebakan Anda Salah %d kali!\n", countNum); //Statement jawaban salah x kali                 if(magic_no > tebakan)
            printf("Tebakan Anda Terlalu Kecil\n");         // Satement bila jawaban terlalu kecil
        else
            printf("Tebakan Anda Terlalu Besar\n"); // Satement bila jawaban terlalu besar
    }

    if (countNum == 5) // Maksimal percobaan tebakan
    {
        printf("\nJawaban yang benar adalah %d\n\n", magic_no); // Statement menunjukkan jawaban benar
        break;
    }

    printf("\n");
}
else
{
    printf("-> Masukkan Angka %d - %d! <-\n\n", BATAS_BAWAH, BATAS_ATAS);
}
}
}

void mainLagi(void)
{
    int maumain;

    printf("Apakah Anda ingin main lagi?\n1.Ya\n2.Tidak\nBerikan pilihan: ");
    scanf("%d", &maumain);
    printf("\n\n");

    if (maumain == 1) // Jika Ya program akan membersihkan layar program
    {
        system("cls");
        main();
    }
}