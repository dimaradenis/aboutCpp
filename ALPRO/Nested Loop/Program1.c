#include <stdio.h>

int main()
{
    // Tampilan Awal
    printf("Bintang Segitiga \n");

    // Deklarasi
    int tinggi, x, y, z;

    printf("Masukan Tinggi :");
    scanf("%d", &tinggi);

    for (x = 1; x <= tinggi; x++)
    {
        for (y = 1; y <= tinggi - x; y++)
        {
            printf(" ");
        }
        for (z = 1; z <= 2 * x - 1; z++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}