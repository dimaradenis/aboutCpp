/* ALGORITMA DAN PEMOGRAMAN J081
   
   KELOMPOK 9
   1. Denis Lizard Sambawo Dimara (21081010159)
   2. Dzaru Rizky Fathan Fortuna (21081010283)\

   Modul 6 (Nomer 5b)
*/


#include <stdio.h>

void dekorasi()
{
	printf("----------------------------------------------------------\n");
}

int main()
{
	char genap[5] = {2, 4, 6, 8, 10};
	
	printf("INSERT ARRAY \n");
	dekorasi(); printf("\n");
	
	printf("Bilangan Genap \n\n");
	
	for(int loop = 0; loop<5; loop++)
	{
		printf("%d \n", genap[loop]);	
	}
	return 0;
}