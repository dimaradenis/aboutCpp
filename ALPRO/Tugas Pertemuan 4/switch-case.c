/*
Nama    : Denis Lizard Sambawo Dimara
NPM     : 21081010159
Prodi   : S1-Informatika
Kelas   : Algoritma dan Pemrograman J081
*/

/* Buatlah Program dalam bahasa C yang
mengimlementasikan syntax SWITCH CASE */

#include <stdio.h>

int main()
{
    char nama[50];
    int jumplah, pilih, total;
    printf("------------------------------\n");
    printf("----------- DE'MOVIE ---------\n");
    printf("------------------------------\n");

    printf("Masukan nama Anda :");
    scanf("%s", &nama);

    printf("\n\nSelamat Datang %s", nama);
    printf("\n--- DAFTAR FILM YANG DIPUTAR ---\n");
    printf("1. Avengers End Game\n");
    printf("2. Spiderman Home Coming\n");
    printf("3. Doctor Strange in the Multiverse of Madness\n");
    printf("Masukan Pilihan Anda :");
    scanf("%d", &pilih);

    switch (pilih)
    {
    case 1 /* constant-expression */:
        /* code */
        printf("\n\n---------------------------\n");
        printf("---- Avengers End Game ----\n");
        printf("---------------------------\n\n");
        printf("Harga Tiket Rp 40.000/Org\n");
        printf("Masukan Jumlah Tiket : ");
        scanf("%d", &jumplah);
        total = jumplah * 40000;
        printf("\nTotal Pembayaran Anda : Rp. %d", total);
        break;
    case 2:
        printf("\n\n---------------------------\n");
        printf("-- Spiderman Home Coming --\n");
        printf("---------------------------\n\n");
        printf("Harga Tiket Rp 40.000/Org\n");
        printf("Masukan Jumlah Tiket : ");
        scanf("%d", &jumplah);
        total = jumplah * 40000;
        printf("\nTotal Pembayaran Anda :Rp. %d", total);

    case 3:
        printf("\n\n-------------------------------------------------------\n");
        printf("----- Doctor Strange in the Multiverse of Madness -----\n");
        printf("-------------------------------------------------------\n\n");
        printf("Harga Tiket Rp 40.000/Org\n");
        printf("Masukan Jumlah Tiket : ");
        scanf("%d", &jumplah);
        total = jumplah * 40000;
        printf("\nTotal Pembayaran Anda :Rp. %d", total);
    default:
        printf("Menu Tidak Tersedia\n");
        break;
    }

    printf(" \nTerima Kasih");
    return 0;
}
