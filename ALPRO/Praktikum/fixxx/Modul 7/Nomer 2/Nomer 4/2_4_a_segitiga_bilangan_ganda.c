/* Tugas Praktikum 2
   Algoritma dan Pemograman J081
   
   Anggota Kelompok 9:
   1. Denis Lizard Sambawo Dimara (21081010159)
   2. Dzaru Rizky Fathan Fortuna  (21081010283)
   
   Modul 7 (Soal Nomer 2)
   Nomer 4 - Tanpa passing parameter
   
*/
    
#include <stdio.h>

void dekorasi()
{
	printf("================================================================ \n");
}

void input()
{
	// Input
	printf("Masukkan jumlah baris segitiga : ");
}

void thanks()
{
	// Program selesai
	printf("Terima kasih telah menggunakan program kami ^_^ ");
}

int main()
{
	   
	// Deklarasi
	int bintang;
	
	// Memanggil fungsi tanpa passing parameter ----> void dekorasi
	dekorasi();
	
	// Nama Program
	printf("\t PROGRAM SEGITIGA SIKU - SIKU BILANGAN BERGANDA \n");
	dekorasi(); printf("\n");
	
	// Memanggil fungsi tanpa passing parameter ----> void input
	input();
	
	// Menyimpan data yang dimasukkan oleh user
	scanf("%d", &bintang);
	
	printf("\a \n");
	
	// Process (For Loop)  ---> Output
	for(int baris = 1; baris<=bintang; baris++)
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
			printf("%d", baris); // Output yang dikeluarkan nilai dari variabel baris
			
			/* 	Digunakan untuk membuat kolom 
				Loop (baris)	: 1 
				Loop (kolom)    :
			
				1
			    22    ---> dibuat setelah selesai menjalankan for loop 2 dan mengulang kembali ke for loop 1
				333
				4444
			*/
		}
		printf("\n");
	}
	
	printf("---------------------------------------------------------------- \n\n");
	
	// Memanggil fungsi tanpa passing parameter ----> void thanks
	thanks();
	
	return 0;
}

