#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nama[2][2][10]; // Deklarasi 2 kolom , 2 baris , 10 Karakter
    int i, j;

    // Looping Luar
    printf("Masukan nama \n");
    for (i = 0; i < 2; i++)
    {
        /* code */

        for (j = 0; j < 2; j++) // Looping Dalam
        {
            /* code */
            printf("Nama[%i][%i] :", i + 1, j + 1);
            gets(nama[i][j]);
        }
        printf("\n");
    }

    // Looping Luar
    for (i = 0; i < 2; i++)
    {
        /* code */
        for (j = 0; j < 2; j++) // Looping Dalam
        {
            /* code */
            printf("Nama[%i][%i] : %s \n", i + 1, j + 1, nama[i][j]);
        }
    }

    system("PAUSE");
    return 0;
}
