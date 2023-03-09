
/*
Nama    : Denis Lizard Sambawo Dimara
NPM     : 21081010159
Prodi   : S1-Informatika
Kelas   : Algoritma dan Pemrograman J081
*/

/* Buatlah Program dalam bahasa C yang
mengimlementasikan syntax IF ELSE */

#include <stdio.h>

int main()
{

    char nama[50];
    int npm, biologi, matematika, fisika, kimia, result;
    int banyak = 4;

    printf("-------------------------\n");
    printf("------- SIAMIKKU --------\n");
    printf("-------------------------\n\n\n");

    printf(" Masukan Nama Anda\t:");
    scanf("%s", &nama);
    printf(" Masukan NPM Anda \t:");
    scanf("%d", &npm);

    printf("\n\n");
    printf("-------------------------\n");
    printf("Selamat Datang %s\n\n", nama);

    printf("Masukan Nilai Biologi \t\t: ");
    scanf("%d", &biologi);
    printf("Masukan Nilai Kimia \t\t: ");
    scanf("%d", &kimia);
    printf("Masukan Nilai Matematika \t: ");
    scanf("%d", &matematika);
    printf("Masukan Nilai Fisika \t\t: ");
    scanf("%d", &fisika);

    printf("\n\n");

    result = (biologi + kimia + matematika + fisika) / banyak;

    if (result >= 80)
    {
        printf("Selamat Anda Lulus");
    }
    else
    {
        printf("Maaf ,Anda belum lulus");
    }

    printf(" \nTetap Semangat ");
    return 0;
}
