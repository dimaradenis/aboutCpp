/* ALGORITMA DAN PEMOGRAMAN J081
   
   KELOMPOK 9
   1. Denis Lizard Sambawo Dimara (21081010159)
   2. Dzaru Rizky Fathan Fortuna (21081010283)

   Modul 7 (Nomer 3)
*/

#include <stdio.h>
#include <math.h>

void dekorasi()
{
	printf("================================================ \n");
}
void input()
{
	printf("Masukkan jari-jari lingkaran : ");
	
}
double proses(double alamat)
{
	double hasil = 3.14*pow(alamat, 2);
	
	return hasil;
}

int main()
{
	double r;
	
	dekorasi();
	printf("|\t PROGRAM MENCARI LUAS LINGKARAN        | \n");
	dekorasi(); printf("\n");
	
	input();
	scanf("%lf", &r);
	
	printf("\a\n");
	printf("Hasil = %.2lf", proses(r));
	
	printf("\n");
	printf("------------------------------------------------ \n\n");
	printf("Terima kasih telah menggunakan program kami ^_^ ");
	return 0;
}