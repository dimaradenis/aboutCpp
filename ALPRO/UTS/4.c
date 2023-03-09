/*
Nama : Denis Lizard Sambawo Dimara
Kelas: J081
NPM  : 21081010159
 */
#include <stdio.h>

int main()
{
    int pilih, status, jumplah;
    // Tampilan Awal
    printf("-----------------------------------------------------\n");
    printf("----------------- CAFE JAJAN YUK --------------------\n");
    printf("-----------------------------------------------------\n\n");

    // Tampilan Menu Cafe Jajan Yuk
    printf("Berikut ini adalah daftar menu di Cafe  Jajan Yuk  \n");
    printf("1. Brownies \t\tRp15.000\n");
    printf("2. Kebab \t\tRp28.000\n");
    printf("3. Es Doger \t\tRp15.000\n");
    printf("4. Potato Gratin \tRp25.000\n");
    printf("5. Cookies\t\tRp15.000\n");
    printf("6. Bebek Goreng\t\tRp25.000\n");
    printf("7. Carbonara \t\tRp25.000\n");
    printf("8. Zuppa Soup \t\tRp20.000\n");
    printf("9. Corn Dog Mozarella \tRp15.000\n\n");

    // Inputkan Data
    printf("Masukan nomor menu yang anda pilih :");
    scanf("%i", &pilih);

    if (pilih == 1)
    {
        printf("Silahkan melakukan pembayaran ");
        printf(" Terimakasih ");
    }
    else if (pilih == 2)
    {
        printf("Jumplah Pembelian\t:");
        scanf("%i", &jumplah);
        printf("-------------------\n");
        printf("1. Dine in\n");
        printf("2. Take Away\n");
        printf("Pilih\t:");
        scanf("%i", &status);
        if (jumplah >= 2 && status == 1)
        {
            printf("Anda mendapatkan bonus 1 minuman Thai Tea Jumbo");
        }
        else
        {
            printf("Silahkan melakukan pembayaran ");
            printf(" Terimakasih ");
        }
    }
    else if (pilih == 3)
    {
        printf("Silahkan melakukan pembayaran ");
        printf(" Terimakasih ");
    }

    else if (pilih == 4)
    {
        printf("Silahkan melakukan pembayaran ");
        printf(" Terimakasih ");
    }

    else if (pilih == 5)
    {
        printf("Silahkan melakukan pembayaran ");
        printf(" Terimakasih ");
    }

    else if (pilih == 6)
    {
        printf("Silahkan melakukan pembayaran ");
        printf(" Terimakasih ");
    }

    else if (pilih == 7)
    {
        printf("Silahkan melakukan pembayaran ");
        printf(" Terimakasih ");
    }

    else if (pilih == 8)
    {
        printf("Silahkan melakukan pembayaran ");
        printf(" Terimakasih ");
    }

    else if (pilih == 9)
    {
        printf("Silahkan melakukan pembayaran ");
        printf(" Terimakasih ");
    }
    else
    {
        printf("Silahkan melakukan pembayaran ");
        printf(" Terimakasih ");
    }

    return 0;
}