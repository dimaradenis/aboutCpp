#include <stdio.h>

int main()
{

    int totalbelanja, diskon10, diskon20;
    printf("----------------------\n");
    printf("Selamat datang di Toko\n");
    printf("----------------------\n");

    printf("Masukan Total Belanja :");
    scanf("%i", &totalbelanja);

    if (150000 <= totalbelanja < 250000)
    {
        diskon10 = totalbelanja * 0.9;
        printf("Anda mendapatkan diskon 10 persen \n");
        printf("Total Pembayaran Anda setelah diskon : %i\n", diskon10);
    }
    else
    {
        diskon20 = totalbelanja * 0.8;
        printf("Anda mendapatkan diskon 20 persen\n");
        printf("Total Pembayaran Anda setelah diskon : %i\n", diskon20);
    }
    printf("Selesai");
}