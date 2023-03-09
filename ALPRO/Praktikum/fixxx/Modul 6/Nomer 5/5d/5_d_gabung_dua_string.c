/* ALGORITMA DAN PEMOGRAMAN J081
   
   KELOMPOK 9
   1. Denis Lizard Sambawo Dimara (21081010159)
   2. Dzaru Rizky Fathan Fortuna (21081010283)\

   Modul 6 (Nomer 5d)
*/

#include <stdio.h>

void dekorasi()
{
	printf("----------------------------------------------------------\n");
}

int main()
{
	char namamatkul[2][11] = {"ALGORITMA", "PEMOGRAMAN"};
	
	printf("PENGGABUNGAN DUA STRING \n");
	dekorasi(); 
	
	printf("\n");
	printf("%s DAN %s J081", namamatkul[0], namamatkul[1]);
	
	return 0;
}