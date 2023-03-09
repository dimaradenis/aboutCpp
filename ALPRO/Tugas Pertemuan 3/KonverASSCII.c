/*
Nama    : Denis Lizard Sambawo Dimara
NPM     : 21081010159
Kelas   : Algoritma dan Pemrograman J081
File    : Tugas Pemrograman 2
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    char a;
    int b, pilih;
    printf("-------------------------------------\n");
    printf("------ SELAMAT DATANG DE'ASCII ------\n");
    printf("-------------------------------------\n\n");

    printf("Masukan Karakter \t\t: ");
    scanf("%c", &a);
    printf("Masukan Angka Mulai 33 - 126\t: ");
    scanf("%d", &b);

    printf("\n\nPilih Program Konverter ASCII\n");
    printf("1.Karakter To Desimal \n");
    printf("2.Desimal To Karakter\n\n");
    printf("Masukan Pilihan Menu \t\t:");
    scanf("%d", &pilih);

    if (pilih == 1)
    {
        printf("Hasil Karakter Dalam Desimal \t:%d \n", a);
    }
    else
    {
        printf("Hasil Desimal Dalam Karakter \t:%c \n", b);
    }
    printf("----- TERIMA KASIH ------");
}