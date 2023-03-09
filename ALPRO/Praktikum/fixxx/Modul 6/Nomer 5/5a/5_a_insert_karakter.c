/* ALGORITMA DAN PEMOGRAMAN J081
   
   KELOMPOK 9
   1. Denis Lizard Sambawo Dimara (21081010159)
   2. Dzaru Rizky Fathan Fortuna (21081010283)\

   Modul 6 (Nomer 5a)
*/

#include <stdio.h>

void dekorasi()
{
	printf("----------------------------------------------------------\n");
}

int main()
{
	char hurufvokal[5] = {'A', 'I', 'U', 'E', 'O'};
		
	printf("INSERT KARAKTER \n");
	dekorasi(); printf("\n");
	
	printf("Huruf Vokal \n\n");
	
	for(int loop = 0; loop<5; loop++)
	{
		printf("%c\t", hurufvokal[loop]);
	}
	
	return 0;
}