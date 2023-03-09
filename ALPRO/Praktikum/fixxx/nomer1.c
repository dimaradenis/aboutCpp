#include <stdio.h>

int main ()
{
	// Deklarasi
	int kode_bulan;
	
	// Nama Anggota Kelompok
	printf("Kelompok 9 \n");
	printf("Nama Anggota : \n");
	printf("1. Denis Lizard Sambawo Dimara (21081010159) \n");
	printf("2. Dzaru Rizky Fathan Fortuna  (21081010283) \n\n");
	
	// Nama Program
	printf("=============================================== \n");
	printf("\t PROGRAM MENENTUKAN NAMA BULAN \n");
	printf("=============================================== \n\n");
	
	// Input
	printf("Masukkan kode bulan : ");
	scanf("%d", &kode_bulan);
	
	printf("-----------------------------------------------\n\a");
	// Switch Case ----> Output
	switch(kode_bulan)
	{
		case 1:
			printf("Januari");
			break;
		case 2:
			printf("Februari");
			break;
		case 3:
			printf("Maret");
			break;
		case 4:
			printf("April");
			break;
		case 5:
			printf("Mei");
			break;
		case 6:
			printf("Juni");
			break;
		case 7:
			printf("Juli");
			break;
		case 8:
			printf("Agustus");
			break;
		case 9:
			printf("September");
			break;
		case 10:
			printf("Oktober");
			break;
		case 11:
			printf("November");
			break;
		case 12:
			printf("Desember");
			break;
		default:
			// Output ---> Jika user menginputkan selain dari 1-12
			printf("Maaf, input yang Anda masukkan salah \n");
			printf("Silakan lakukan ulang kembali program");
			break;
	}
	printf("\n\nTerima kasih telah menggunakan program kami ^_^");
	return 0;
}