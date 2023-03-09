/* Tugas Praktikum 2
   Algoritma dan Pemograman J081
   
   Anggota Kelompok 9:
   1. Denis Lizard Sambawo Dimara (21081010159)
   2. Dzaru Rizky Fathan Fortuna  (21081010283)
  
   Modul 7 (Nomer 2)
   Nomer 7 - Tanpa passing parameter 

*/

#include <stdio.h>

void dekorasi1()
{
	printf("======================================================== \n");
}

void dekorasi2()
{
	printf("-------------------------------------------------------- \n");
}

void output()
{
	printf("HASIL PENJUMLAHAN \a\n\n");
}

int main()
{
	int matriksA[2][2], matriksB[2][2], hasil[2][2];
	int baris, kolom;
	
	dekorasi1();
	printf("\t PROGRAM PENJUMLAHAN MATRIKS ORDO 2X2 \n");
	dekorasi1(); printf("\n");
	
	for(baris = 0; baris < 2; baris++)
	{
		for(int kolom = 0; kolom < 2; kolom++)
		{
			printf("Elemen Matriks A [%d][%d] : ", baris+1, kolom+1);
			scanf("%d", &matriksA[baris][kolom]);	
		}
	}
	printf("\n");
	for(int baris = 0; baris < 2; baris++)
	{
		for(int kolom = 0; kolom < 2; kolom++)
		{
			printf("Elemen Matriks B [%d][%d] : ", baris+1, kolom+1);
			scanf("%d", &matriksB[baris][kolom]);	
		}
	}
	printf ("\a\n"); dekorasi2();
	output();
	
	for(int baris = 0; baris < 2; baris++)
	{
		for(int kolom = 0; kolom < 2; kolom++)
		{
			if(hasil[baris][kolom] == hasil[1][0])
			{
				printf("\n");
			}
			hasil[baris][kolom] = matriksA[baris][kolom] + matriksB[baris][kolom];
			printf("%d \t", hasil[baris][kolom]);
		}
	}
	printf("\n");
	dekorasi2(); printf("\n");
	printf("Terima kasih telah menggunakan program kami ^_^");
	return 0;
}