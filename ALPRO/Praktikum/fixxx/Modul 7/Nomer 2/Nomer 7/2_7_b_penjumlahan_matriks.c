/* Tugas Praktikum 2
   Algoritma dan Pemograman J081
   
   Anggota Kelompok 9:
   1. Denis Lizard Sambawo Dimara (21081010159)
   2. Dzaru Rizky Fathan Fortuna  (21081010283)
  
   Modul 7 (Nomer 2)
   Nomer 7 - Dengan passing parameter 

*/

#include <stdio.h>

void dekorasi2()
{
	printf("-------------------------------------------------------- \n");
}

int process(int matriksA[2][2], int matriksB[2][2], int hasil[2][2])
{
	int baris, kolom;
	
	for(baris = 0; baris < 2; baris++)
	{
		for(kolom = 0; kolom < 2; kolom++)
		{
			printf("Elemen Matriks A [%d][%d] : ", baris+1, kolom+1);
			scanf("%d", &matriksA[baris][kolom]);
		}
	}
	printf("\n");
	for(baris = 0; baris < 2; baris++)
	{
		for(kolom = 0; kolom < 2; kolom++)
		{
			printf("Elemen Matriks B [%d][%d] : ", baris+1, kolom+1);
			scanf("%d", &matriksB[baris][kolom]);
		}
	}
	printf("\a \n"); dekorasi2();
	printf("HASIL PENJUMLAHAN MATRIKS \n\n");
	for(baris = 0; baris < 2; baris++)
	{
		for(kolom = 0; kolom < 2; kolom++)
		{
			hasil[baris][kolom] = matriksA[baris][kolom] + matriksB[baris][kolom];
			if(hasil[baris][kolom] == hasil[1][0])
			{
				printf("\n");
			}
			printf("%d \t", hasil[baris][kolom]);
		}
	}
	printf("\n");
	return process;
}

int main()
{
	int a[2][2], b[2][2], c[2][2];
	
	printf("======================================================== \n");
	printf("\t PROGRAM PENJUMLAHAN MATRIKS ORDO 2X2 \n");
	printf("======================================================== \n\n");
	
	process(a, b, c);	
	
	dekorasi2(); printf("\n");
	printf("Terima kasih telah menggunakan program kami ^_^");
	return 0;
}