/* Tugas Praktikum 2
   Algoritma dan Pemograman J081
   
   Anggota Kelompok 9:
   1. Denis Lizard Sambawo Dimara (21081010159)
   2. Dzaru Rizky Fathan Fortuna  (21081010283)
  
   Modul 7 (Nomer 2)
   Nomer 8 - Dengan passing parameter 

*/


#include <stdio.h>

double rumus(double a[7])
{
	double hasil = (a[0] + a[1] + a[2] + a[3] + a[4] + a[5] + a[6])/7;
	
	return hasil;
}

int main()
{
	double suhu[7], kelembapan[7], ratasuhu, ratakelembapan;
	char ulang;
	
	printf("===============================================================================\n");
	printf("|\t PROGRAM MENCARI RATA-RATA SUHU DAN KELEMBAPAN SELAMA 1 MINGGU        |\n");
	printf("===============================================================================\n\n");
	
	for(int loop = 0; loop < 7; loop++)
	{
		printf("Masukkan data suhu hari ke-%d (celcius)      : ", loop+1);
		scanf("%lf", &suhu[loop]);
		printf("Masukkan data kelembapan hari ke-%d (g/m^3)  : ", loop+1);
		scanf("%lf", &kelembapan[loop]);
		
		printf("\n");
	}
	
	ratasuhu = rumus(suhu);
	ratakelembapan = rumus(kelembapan);
	
	printf("\a");
	
	printf("------------------------------------------------------------------------------- \n");
	printf("Rata - Rata suhu dan kelembapan selama 1 minggu pada rumah kaca \n\n");
	printf("Suhu        : %.2lf C\n", ratasuhu);
	printf("Kelembapan  : %.2lf g/m^3\n\n", ratakelembapan);
	
	printf("Apakah Anda ingin mengulang program [y]/[n]? ");
	scanf("%c %c", &ulang, &ulang);
	
	printf("------------------------------------------------------------------------------- \n\n");
	if (ulang == 'Y' || ulang == 'y')
	{
		main();
	}
	else
	{
		printf("Terima kasih telah menggunakan program kami ^_^");
	}
	return 0;
}