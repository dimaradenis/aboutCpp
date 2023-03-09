/* Tugas Praktikum 2
   Algoritma dan Pemograman J081
   
   Anggota Kelompok 9:
   1. Denis Lizard Sambawo Dimara (21081010159)
   2. Dzaru Rizky Fathan Fortuna  (21081010283)
  
   Modul 7 (Nomer 2)
   Nomer 6 - Tanpa passing parameter
   
*/

#include <stdio.h>

void dekorasi()
{
	printf("============================================================\n");
}

void input()
{
	// Input
	printf("Masukkan jumlah baris segitiga : ");
}

void thanks()
{
	// Program selesai
	printf("Terima kasih telah menggunakan program kami ^_^");
}

int main()
{	
	// Deklarasi
	int bintang;
	
	// Memanggil fungsi tanpa passing parameter ----> void dekorasi
	dekorasi();
	
	// Nama Program
	printf(" \t PROGRAM SEGITIGA SIKU-SIKU ATAS (BINTANG) \n");
	dekorasi(); printf("\n");
	
	// Memanggil fungsi tanpa passing parameter ----> void input
	input();
	
	// Menyimpan data yang dimasukkan oleh user
	scanf("%d", &bintang);
	
	printf("\a \n");
	
	// Process (For Loop)  ---> Output
	for(int baris = 1; baris <= bintang; baris++)
	{
		/* 	Digunakan untuk membuat baris 
		    
			Input   	   :  4 
			Loop (baris)   :  
		
			4
			3  ---> dibuat setelah for loop 2 selesai dijalankan
			2
			1 
		*/	
		
		for(int kolom = bintang; kolom >= baris; kolom--)
		{
			printf("*"); // Output
			
			/* 	Digunakan untuk membuat kolom 
				Loop (baris)	: 1 
				Loop (kolom)    :
			
				****  
			    ***    ---> dibuat setelah selesai menjalankan for loop 2 dan mengulang kembali ke for loop 1
				**
				*
			*/
		}
		printf("\n");
	}
	
	printf("------------------------------------------------------------ \n\n");
	
	// Memanggil fungsi tanpa passing parameter ----> void thanks
	thanks();
	
	return 0;
}