/* ALGORITMA DAN PEMOGRAMAN J081
   
   KELOMPOK 9
   1. Denis Lizard Sambawo Dimara (21081010159)
   2. Dzaru Rizky Fathan Fortuna (21081010283)\

   Modul 6 (Nomer 5c)
*/

#include <stdio.h>

void dekorasi()
{
	printf("----------------------------------------------------------\n");
}

int main()
{
	char kalimat[1][27] = {"SOAL PRAKTIKUM NOMER 5 (C)"};
	
	printf("PENCARIAN SUBSTRING \n");
	dekorasi(); 
	
	printf("Kalimat : %s \n", kalimat[0]);	
	printf("----------------------------------------------------------\n");
	
	printf("\n"); printf("Substring \n\n");
	
	printf("Kata ke-2 : ");
	for(int loop = 5; loop < 15; loop++)
	{
		printf("%c", kalimat[0][loop]);
	}
	return 0;
}