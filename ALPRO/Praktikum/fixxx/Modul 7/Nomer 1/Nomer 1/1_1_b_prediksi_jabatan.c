/* ALGORITMA DAN PEMOGRAMAN J081
   
   KELOMPOK 9
   1. Denis Lizard Sambawo Dimara (21081010159)
   2. Dzaru Rizky Fathan Fortuna  (21081010283)

   Modul 7 (Nomer 1)
   Nomer 1 - Dengan passing parameter
*/

#include <stdio.h>

void nilaites(int point)
{
    if (point <= 5 && point >= 1)
    {
        /* code */
        printf("Operator");
    }
    else if (point <= 8 && point >= 6)
    {
        printf("Staff");
    }
    else if (point <= 10 && point > 8)
    {
        printf("Eksekutif");
    }
    else if (point <= 13 && point >= 11)
    {
    	printf("Senior Eksekutif");
	}
    else if (point <= 16 && point >= 14)
    {
        printf("Assisten Manager");
    }
    else if (point <= 20 && point >= 17)
    {
        printf("Manager");
    }
    else
    {
    	printf("Maaf input yang Anda masukkan salah \n");
    	printf("Mohon lakukan ulang kembali program \n");
	}
}

int main()
{
    int point;
    printf("Masukan Nilai 1 - 20 : ");
    scanf("%d", &point);
    
    printf("\n");
    nilaites(point);
    
    printf("\n----------------------------------------------------\n\n");
    printf("Terima kasih telah menggunakan program kami ^_^");
    return 0;
}
