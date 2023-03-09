/* Tugas Praktikum 2
   Algoritma dan Pemograman J081
   
   Anggota Kelompok 9:
   1. Denis Lizard Sambawo Dimara (21081010159)
   2. Dzaru Rizky Fathan Fortuna  (21081010283)
  
   Modul 7 (Nomer 2)
   Nomer 2 - Tanpa passing parameter 
*/

#include <stdio.h>

void dekorasi()
{
	printf("================================================= \n");
}

void input()
{
	printf("Masukkan jumlah baris bintang : ");
}

int main()
{   
	// Deklarasi
	int bintang;
	
	// Nama Program
	dekorasi();
	printf("\t PROGRAM SEGITIGA SIKU-SIKU ATAS \n");
	dekorasi(); printf("\n");
	
	// Input
	input();
	scanf("%d", &bintang);
	
	printf("\a \n");
	
	// Process (For Loop)  ---> Output
	for(int baris = 1; baris<=bintang ; baris++)
	{
		/* 	Digunakan untuk membuat baris 
		    
			Input   	   :  4 
			Loop (baris)   :  
		
			1
			2  ---> dibuat setelah for loop 2 selesai dijalankan
			3
			4 
		*/	
		
		for(int kolom = 1; kolom<=baris; kolom++)
		{	
			printf("*"); // Output
			
			/* 	Digunakan untuk membuat kolom 
				Loop (baris)	: 1
				  
				*
			    **    ---> dibuat setelah selesai menjalankan for loop 2 dan mengulang kembali ke for loop 1
				***
				****
			*/
		}
		printf("\n");
	}
	
	// Program Selesai
	printf("------------------------------------------------ \n\n");
	printf("Terima kasih telah menggunakan program kami ^_^");
	
	return 0;
}