#include <stdio.h>

int main()
{
    int X[7] = {1, 2, 3, 4, 5, 6, 7};
    int Y[8] = {8, 9, 10, 11, 12, 13, 14, 15};
    int Z[15] = {0};
    int i, j;

    printf("----------------------------------------\n");
    printf("PROGRAM MENGGABUNGKAN ARRAY SATU DIMENSI\n");
    printf("----------------------------------------\n\n");

    // Menampilkan Isi Array X
    printf("Array X : ");
    for (i = 0; i < 7; i++)
    {
        // Code
        printf("%3i", X[i]);
    }

    printf("\n");

    // Menampilkan Isi Array Y
    printf("Array Y : ");
    for (i = 0; i < 8; i++)
    {
        // Code
        printf("%3i", Y[i]);
    }

    // Deklarasi Isi Array Z
    j = 0;
    // Memindahan Isi Arary X ke Z
    for (i = 0; i < 7; i++)
    {
        Z[j] = X[i];
        j++;
    }
    // Memindahan Isi Arary Y ke Z
    for (i = 0; i < 8; i++)
    {
        Z[j] = Y[i];
        j++;
    }

    // Mencetak Isi Array Z
    printf("\nArray C :");
    for (i = 0; i < 15; i++)
    {
        printf(" %3i", Z[i]);
    }

    return 0;
}