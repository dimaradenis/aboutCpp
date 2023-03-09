#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Mendeklarasikan Matriks 3 Baris 3 Kolom
    int a[2][2];
    int b[2][2];
    int c[2][2];
    int i, j;

    // Tampilan Awal
    printf("---------------\n");
    printf("    Matriks \n");
    printf("---------------\n");

    // Input dan Looping Data
    for (i = 0; i < 2; i++)
    {
        /* code */
        for (j = 0; j < 2; j++)
        {
            /* code */
            printf("a[%i][%i] :", i + 1, j + 1);
            scanf("%i", &a[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // Input dan Looping Data
    for (i = 0; i < 2; i++)
    {
        /* code */
        for (j = 0; j < 2; j++)
        {
            /* code */
            printf("b[%i][%i] :", i + 1, j + 1);
            scanf("%i", &b[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // Proses Data
    for (i = 0; i < 2; i++)
    {
        /* code */
        for (j = 0; j < 2; j++)
        {
            /* code */
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    // Output Data
    for (i = 0; i < 2; i++)
    {
        /* code */
        for (j = 0; j < 2; j++)
        {
            /* code */
            printf("c[%i][%i]%i \n", i + 1, j + 1, c[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    system("PAUSE");
    return 0;
}