/*
Nama    : Denis Lizard Sambawo Dimara
NPM     : 21081010159
Kelas   : Algoritma dan Pemrograman J081
File    : Tugas Pemrograman 2
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int menu;
    float a, b, c;

    while (1)
    {

        printf("------- Menu Pitagoras -------\n\n");

        printf("             /| \n");
        printf("       [a]  / | \n");
        printf("           /  | \n");
        printf("          /   | [b]  \n");
        printf("         /____| \n");
        printf("           [c]  \n\n");

        printf("1. Menghitung sisi miring(a) \n");
        printf("2. Menghitung sisi tegak (b) \n");
        printf("3. Menghitung sisi alas  (c) \n");
        printf("4. Keluar program \n");
        printf("------------------------------\n");

        printf("Pilih Menu untuk melanjutkan :");
        scanf("%d", &menu);
        fflush(stdin);

        if (menu == 1)
        {
            printf("Masukkan nilai b\t: ");
            scanf("%f", &b);
            printf("Masukkan nilai c\t: ");
            scanf("%f", &c);
            a = sqrt((b * b) + (c * c));
            printf("Nilai sisi miring adalah %2.f\n", a);
        }
        else if (menu == 2)
        {
            printf("Masukkan nilai a\t: ");
            scanf("%f", &a);
            printf("Masukkan nilai c\t: ");
            scanf("%f", &c);
            b = sqrt((a * a) - (c * c));
            printf("Nilai sisi tegak adalah  %2.f\n", b);
        }
        else if (menu == 3)
        {
            printf("Masukkan nilai a\t: ");
            scanf("%f", &a);
            printf("Masukkan nilai b\t: ");
            scanf("%f", &b);
            c = sqrt((a * a) - (b * b));
            printf("Nilai sisi miring adalah %2.f\n", c);
        }
        else if (menu == 4)
        {
            exit(0);
        }
        else
        {
            printf("Menu yang anda input salah");
        }
    }
    return 0;
}