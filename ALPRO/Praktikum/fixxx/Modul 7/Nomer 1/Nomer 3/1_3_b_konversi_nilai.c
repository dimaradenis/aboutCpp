/* ALGORITMA DAN PEMOGRAMAN J081
   
   KELOMPOK 9
   1. Denis Lizard Sambawo Dimara (21081010159)
   2. Dzaru Rizky Fathan Fortuna  (21081010283)

   Modul 7 (Nomer 1)
   Nomer 3 - Dengan passing parameter
*/

#include <stdio.h>

void Huruf(int nilai)
{
    if (nilai <= 34 && nilai >= 0)
    {
        /* code */
        printf("E");
    }
    else if (nilai <= 49 && nilai>=35)
    {
        printf("D");
    }
    else if (nilai <= 64 && nilai>=50)
    {
        printf("C");
    }
    else if (nilai <= 79 && nilai >=65)
    {
        printf("B");
    }
    else if (nilai <= 100 && nilai >=80)
    {
        printf("A");
    }
    else 
    {
    	printf("Maaf, inputan yang Anda masukkan salah \n");
    	printf("Mohon lakukan ulang kembali program \n");
	}
}

int main()
{
    int nilai;
    printf("Masukan Nilai 1 - 100 : ");
    scanf("%d", &nilai); printf("\n");
    
    Huruf(nilai);
    printf("\n---------------------------------------------------- \n\n");
    printf("Terima kasih telah menggunakan program kami ^_^ ");
    
    return 0;
}
