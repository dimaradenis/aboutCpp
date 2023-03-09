/*
Nama : Denis Lizard Sambawo Dimara
Kelas: J081
NPM  : 21081010159
 */
#include <stdio.h>

int main()
{
    int bil;

    // Tampilan Awal
    printf("---------------------------\n");
    printf("PROGRAM MENENTUKAN BILANGAN\n");
    printf("---------------------------\n");

    // Inputkan Data
    printf("Masukan bilangan bulat \t:");
    scanf("%d", &bil);

    if (bil > 0)
    {
        printf("Positif");
    }
    else if (bil < 0)
    {
        printf("Negatif");
    }
    else
    {
        printf("Nol");
    }
    return 0;
}