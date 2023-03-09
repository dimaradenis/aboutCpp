/* ALGORITMA DAN PEMOGRAMAN J081

   KELOMPOK 9
   1. Denis Lizard Sambawo Dimara (21081010159)
   2. Dzaru Rizky Fathan Fortuna (21081010283)

   Modul 6 (Nomer 3)
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pilih, amount_arr;
    float rata;
    int data[100];
    int i, n;
    int a, b, j, modus = 0;
    int total = 0;

    printf("------------------------------------------------------\n");
    printf("                 PROGRAM STATISTIKA      \n");
    printf("------------------------------------------------------\n\n");

    printf("Selamat Datang di program Statistika\n\n");
    printf("Pilih Program yang anda inginkan \n");
    printf("1. Menghitung Nilai Rata Rata\n");
    printf("2. Menghitung Modus\n\n");
    printf("Masukan Pilihan (1/2)   : ");
    scanf("%d", &pilih);

    if (pilih == 1)
    {
        /* code */
        printf("Masukan Jumlah Nilai    : ");
        scanf("%d", &amount_arr);
        printf("------------------------------------------------------\n\n");

        // Menginputkan Data Nilai
        for (i = 0; i < amount_arr; i++)
        {
            /* code */
            printf("Masukan Nilai ke-%d: ", i + 1);
            scanf("%d", &data[i]);
            total = total + data[i];
        }

        rata = total / amount_arr;
        printf("Hasil Rata-Rata adalah %2.f\n", rata);
    }
    else if (pilih == 2)
    {
        printf("Masukan Banyak Data : ");
        scanf("%d", &n);
        printf("\n");
        int m[n];

        for (i = 0; i < n; i++)
        {
            scanf("%d", &m[i]);
        }
        modus = m[0];

        for (i = 0; i < n; i++)
        {
            a = 0;
            for (j = 0; j < n; j++)
            {
                if (m[i] == m[j])
                    a++;
            }
            if (a > b)
            {
                modus = m[i];
                b = a;
            }
            else if (a == b)
            {
                if (m[i] > modus)
                {
                    b = a;
                    modus = m[i];
                }
            }
        }
        printf("Modus adalah %d ", modus);
    }
    else
    {
        printf("Error");
    }
    printf("\n------------------------------------------------------\n\n");
    printf("Terima kasih telah menggunakan program kami ^_^");
    return 0;
}
