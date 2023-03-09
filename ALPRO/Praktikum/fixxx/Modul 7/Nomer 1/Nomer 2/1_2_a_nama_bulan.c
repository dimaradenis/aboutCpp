/* ALGORITMA DAN PEMOGRAMAN J081
   
   KELOMPOK 9
   1. Denis Lizard Sambawo Dimara (21081010159)
   2. Dzaru Rizky Fathan Fortuna  (21081010283)

   Modul 7 (Nomer 1)
   Nomer 2 - Tanpa passing parameter
   
*/

#include <stdio.h>

void namabulan()
{
    int angka;
    
    printf("Masukan No Bulan 1 - 12 : ");
    scanf("%d", &angka);
    
    printf("\a\n");
    
    if (angka == 1)
    {
        /* code */
        printf("Januari");
    }
    else if (angka == 2)
    {
        printf("Febuari");
    }
    else if (angka == 3)
    {
        printf("Maret");
    }
    else if (angka == 4)
    {
        printf("April");
    }
    else if (angka == 5)
    {
        printf("Mei");
    }
    else if (angka == 6)
    {
        printf("Juni");
    }
    else if (angka == 7)
    {
        printf("Juli");
    }
    else if (angka == 8)
    {
        printf("Agustus");
    }
    else if (angka == 9)
    {
        printf("September");
    }
    else if (angka == 10)
    {
        printf("Oktober");
    }
    else if (angka == 11)
    {
        printf("November");
    }
    else if (angka == 12)
    {
        printf("Desember");
    }
    else 
	{
		printf("Maaf inputan yang Anda masukkan salah \n");
		printf("Mohon lakukan ulang kembali program \n");
	}
}

int main()
{
    namabulan();
    
    printf("\n-------------------------------------------------------\n\n");
    printf("Terima kasih telah menggunakan program kami ^_^ ");
    return 0;
}
