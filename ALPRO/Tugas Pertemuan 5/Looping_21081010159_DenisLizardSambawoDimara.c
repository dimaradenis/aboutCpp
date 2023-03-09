#include <stdio.h>

int main()
{
    // Tampilan awal menu
    printf("------------------------------------------\n");
    printf("PROGRAM MENAMPILKAN BILANGAN GANJIL/GENAP\n");
    printf("------------------------------------------\n\n");
    // deklarasi
    int bil, batas, pilih;

    // MENU
    printf(" PILIH MENU :\n");
    printf(" 1. Menampilkan Bilangan GANJIL\n");
    printf(" 2. Menampilkan Bilangan GENAP\n");
    printf(" Pilih\t:");
    scanf("%d", &pilih);
    printf("\n\n");

    if (pilih == 1)
    {
        // Input Batas
        printf("Masukan Batas Angka\t:");
        scanf("%d", &batas);

        for (bil = 1; bil <= batas; bil++)
        {
            if (bil % 2 != 0)
                printf("%d\n", bil);
        }
        printf("\n");
    }
    else
    {
        // Input Batas
        printf("Masukan Batas Angka\t:");
        scanf("%d", &batas);

        for (bil = 1; bil <= batas; bil++)
        {
            if (bil % 2 == 0)
                printf("%d\n", bil);
        }
        printf("\n");
    }
    return 0;
}