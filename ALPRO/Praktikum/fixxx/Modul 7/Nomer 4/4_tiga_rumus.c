/* ALGORITMA DAN PEMOGRAMAN J081
   
   KELOMPOK 9
   1. Denis Lizard Sambawo Dimara (21081010159)
   2. Dzaru Rizky Fathan Fortuna (21081010283)

	Modul 7 (nomer 4)
*/

#include <stdio.h>

void dekorasi1()
{
	printf("============================================== \n");
}

void dekorasi2()
{
	printf("---------------------------------------------- \n");
}

float rumus1(float x, float y)
{
	float hasil = (x + y)/2;
	
	return hasil;
}

float rumus2(float x, float y)
{
	float hasil = x*y;
	
	return hasil;
}

float rumus3(float x, float y)
{
	float hasil = (x*x) - y;
	
	return hasil;
}

void output()
{
	printf("\nHasil = \a");
}
int main()
{
	int opsi;
	float a, n;
	
	dekorasi1();
	printf("|\t   PROGRAM MENCARI NILAI B           |\n");
	dekorasi1(); printf("\n");
	
	printf("Pilihan Menu \n");
	printf("~~~~~~~~~~~~~~~~~~~~ \n\n");
	printf("1. B = (A + N) / 2 \n");
	printf("2. B = A*N \n");
	printf("3. B = (A*A) - N \n\n");
	printf("Menggunakan rumus (1/2/3)? ");
	scanf("%d", &opsi);
	
	dekorasi2();
	printf("Masukkan Nilai A : ");
	scanf("%f", &a);
	
	printf("Masukkan Nilai N : ");
	scanf("%f", &n);
	
	output(); 
	
	if(opsi == 1)
	{
		printf("%.f", rumus1(a, n));
	}
	else if(opsi == 2)
	{
		printf("%.f", rumus2(a, n));
	}
	else if (opsi == 3)
	{
		printf("%.f", rumus3(a, n));
	}
	else 
	{
		printf("Maaf, inputan yang Anda masukkan salah");
	}
	
	printf("\n"); dekorasi2(); printf("\n");
	printf("Terima kasih telah menggunakan program kami ^_^");
	return 0;
}
