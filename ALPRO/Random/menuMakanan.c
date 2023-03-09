#include <stdio.h>

int main()
{
    int pilih, jumplah;
    printf("Berikut ini adalah daftar menu di Cafe  Jajan Yuk  \n");
    printf("1. Brownies \n");
    printf("2. Kebab \n");
    printf("3. Es Doger \n");
    printf("4. Potato Gratin \n");
    printf("5. Cookies\n");
    printf("6. Bebek Goreng\n");
    printf("7. Carbonara \n");
    printf("8. Zuppa Soup \n");
    printf("9. Corn Dog Mozarella \n\n");

    printf("Masukan nomor menu yang anda pilih :");
    scanf("%i", &pilih);

    switch (pilih)
    {
    case 1:
        printf("Brownies harga 15.000\n");
        break;

    case 2:
        printf("Kebab harga 28.000\n");

        break;
    case 3:
        printf("Es Doger harga 15.000\n");
        break;

    case 4:
        printf("Potato Gratin harga 25.00\n");

        break;

    case 5:
        printf("Cookies harga 15.000\n");

        break;

    case 6:
        printf("Bebek Goreng harga 25.000\n");

        break;

    case 7:
        printf("Carbonara harga 25.000\n");

        break;
    case 8:
        printf("Zuppa Soup harga 20.000\n");

        break;

    case 9:
        printf("Brownies harga 15.000\n");

        break;

    default:
        printf("Menu tidak tercantum");
        break;
    }
    return 0;
}