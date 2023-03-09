/* Tugas Praktikum 2
   Algoritma dan Pemograman J081
   
   Anggota Kelompok 9:
   1. Denis Lizard Sambawo Dimara (21081010159)
   2. Dzaru Rizky Fathan Fortuna  (21081010283)
  
   Modul 7 (Nomer 2)
   Nomer 8 - Tanpa passing parameter 

*/

#include <stdio.h>

void dekorasi1()
{
	printf("===============================================================================\n");
}
void dekorasi2()
{
	printf("------------------------------------------------------------------------------- \n");
}
void titleOutput()
{
	printf("Rata - Rata suhu dan kelembapan selama 1 minggu pada rumah kaca \n\n");
}
void back()
{
	printf("Apakah Anda ingin mengulang program [y]/[n]? ");
}

int main()
{
	double suhu[7], kelembapan[7], ratasuhu, ratakelembapan;
	char ulang;
	
	dekorasi1();
	printf("|\t PROGRAM MENCARI RATA-RATA SUHU DAN KELEMBAPAN SELAMA 1 MINGGU        |\n");
	dekorasi1(); printf("\n");
	
	for(int loop = 0; loop < 7; loop++)
	{
		printf("Masukkan data suhu hari ke-%d (celcius)     : ", loop+1);
		scanf("%lf", &suhu[loop]);
		printf("Masukkan data kelembapan hari ke-%d (g/m^3) : ", loop+1);
		scanf("%lf", &kelembapan[loop]);
		printf("\n");
	}
	
	ratasuhu = (suhu[0] + suhu[1] + suhu[2] + suhu[3] + suhu[4] + suhu[5] + suhu[6])/7;
	ratakelembapan = (kelembapan[0] + kelembapan[1] + kelembapan[2] + kelembapan[3] + kelembapan[4] + kelembapan[5] + kelembapan[6])/7;
	
	dekorasi2();
	printf("\a"); titleOutput();
	printf("Suhu \t\t: %.2lf C \n", ratasuhu);
	printf("Kelembapan \t: %.2lf g/m^3 \n", ratakelembapan);
	
	printf("\n");
	back();
	scanf("%c %c", &ulang, &ulang);
	
	dekorasi2(); printf("\n");
	
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