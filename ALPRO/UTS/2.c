/*
Nama : Denis Lizard Sambawo Dimara
Kelas: J081
NPM  : 21081010159
 */
#include <stdio.h>

int main()
{
    // Deklarasikan  Variable
    float s1, s2, s3;

    // Tampilan Awal
    printf("---------------------------\n");
    printf("PROGRAM MENENTUKAN SEGITIGA\n");
    printf("---------------------------\n\n");

    // Inputkan Data
    printf("Masukkan sisi ke-1 : ");
    scanf("%f", &s1);
    printf("Masukkan sisi ke-2 : ");
    scanf("%f", &s2);
    printf("Masukkan sisi ke-3 : ");
    scanf("%f", &s3);

    if (s1 == s2 && s1 == s3 && s2 == s3)
    {
        printf("Segitiga Sama Sisi");
    }
    else if (s1 == s2 || s1 == s3 || s2 == s3)
    {
        printf("Segitiga Sama Kaki");
    }
    else
    {
        printf("Segitiga Sembarang");
    }
}
