/* Tugas Praktikum 2
   Algoritma dan Pemograman J081
   
   Anggota Kelompok 9:
   1. Denis Lizard Sambawo Dimara (21081010159)
   2. Dzaru Rizky Fathan Fortuna  (21081010283)
   
   Modul 7 (Nomer 2)
   Nomer 5 - Tanpa passing parameter
     
*/

void dekorasi()
{
	printf("================================================= \n");
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

#include <stdio.h>

int main()
{
	// Deklarasi
	int bintang;
	
	// Memanggil fungsi tanpa passing parameter (void) ---> void dekorasi
	dekorasi();
	
	// Nama Program
	printf("\t    PROGRAM SEGITIGA BILANGAN \n");
	dekorasi(); printf("\n");
	
	// Memanggil fungsi tanpa passing parameter (void) ---> void input
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
			printf("%d", kolom); // Output yang dikeluarkan dari variabel kolom
			
			/* 	Digunakan untuk membuat kolom 
				Loop (baris)	: 1
				  
				1
			    12    ---> dibuat setelah selesai menjalankan for loop 2 dan mengulang kembali ke for loop 1
				123
				1234
			*/
		}
		printf("\n");
	}
	
	// Program Selesai
	printf("------------------------------------------------- \n\n");
	
	// Memanggil fungsi tanpa passing parameter (void) ---> void thanks
	thanks();
	
	return 0;
}