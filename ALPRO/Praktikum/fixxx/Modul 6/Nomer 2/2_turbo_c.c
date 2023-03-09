/* ALGORITMA DAN PEMOGRAMAN J081
   
   KELOMPOK 9
   1. Denis Lizard Sambawo Dimara (21081010159)
   2. Dzaru Rizky Fathan Fortuna (21081010283)\

   Modul 6 (Nomer 2)
*/

#include <stdio.h>

void dekorasi()
{
	printf("----------------------------------------------------------\n");
}

int main ()
{
	char input;
	
	printf("PROGRAM TURBO C \n");
	dekorasi(); printf("\n");
	
	printf("Masukkan Teks \"Turbo C\" : ");
	scanf("%s", &input);
	
	dekorasi();
	
	char kalimat[7][8] = {"Turbo C", "Turbo_", "Turbo", "Turb", "Tur", "Tu", "T"};
	
	for(int i = 0; i<7; i++)
	{
		printf("%s \n", kalimat[i]);
	}
	return 0;
}