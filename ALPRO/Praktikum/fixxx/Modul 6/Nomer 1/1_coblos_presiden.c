/* ALGORITMA DAN PEMOGRAMAN J081
   
   KELOMPOK 9
   1. Denis Lizard Sambawo Dimara (21081010159)
   2. Dzaru Rizky Fathan Fortuna (21081010283)\

   Modul 6 (Nomer 1)
*/

#include <stdio.h>

void dekorasi1()
{
	printf("=========================================================== \n");
}

void dekorasi2()
{
	printf("------------------------------------------------------------ \n");
}

void calon1()
{
	printf("Joko Widodo");
}

void calon2()
{
	printf("Prabowo Subianto");
}

void tidakmemilih()
{
	printf("Golongan Putih");
}

int main()
{
	int voting, coblos, output; 
	int jokowi = 0, prabowo = 0, golput = 0;
	
	dekorasi1();
	printf("|\t PROGRAM COBLOS CALON PRESIDEN TAHUN 2019         |\n");
	dekorasi1(); printf("\n");
	
	printf("Jumlah voting pemilu presiden \t  : ");
	scanf("%d", &voting);
	
	dekorasi2();
	
	char data[voting][2];
	
	printf("\n");
	for(int loop = 0; loop < voting; loop++)
	{
		printf("Masukkan Nomer KTP \t\t  : ");
		scanf("%s", &data[loop][0]);
		printf("Masukkan Nama (sesuai dengan KTP) : ");
		scanf("%s %s %s %s", &data[loop][1], &data[loop][1], &data[loop][1], &data[loop][1]);
		
		printf("\n");
		printf("1."); calon1(); printf("\n"); 
		printf("2."); calon2(); printf("\n");
		printf("Coblos calon presiden (1/2)? ");
		scanf("%d", &coblos);
		
		if(coblos == 1)
		{
			jokowi++;
		}
		else if (coblos == 2)
		{
			prabowo++;
		}
		else 
		{
			golput++;
			printf("\n");
			printf("Maaf input yang Anda masukkan salah, Anda termasuk kedalam \n");
			tidakmemilih(); printf("\n");
		}
		printf("\n");
	}
	
	printf("\a"); dekorasi2();
	
	printf("Jumlah Data Pemilih Calon Presiden \n\n");
	
	calon1(); printf("\t\t: %d \n", jokowi);
	calon2(); printf("\t: %d \n", prabowo);
	tidakmemilih(); printf("\t\t: %d \n", golput);
	
	dekorasi2(); printf("\n");
	
	printf("Terima kasih telah menggunakan program kami ^_^ ");
	
	return 0;
}