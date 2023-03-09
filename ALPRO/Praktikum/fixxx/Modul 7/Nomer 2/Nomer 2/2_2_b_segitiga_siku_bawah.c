/* Tugas Praktikum 2
   Algoritma dan Pemograman J081
   
   Anggota Kelompok 9:
   1. Denis Lizard Sambawo Dimara (21081010159)
   2. Dzaru Rizky Fathan Fortuna  (21081010283)
  
   Modul 7 (Soal Nomer 2)
   Nomer 2 - Dengan passing parameter 
*/

#include <stdio.h>

void dekorasi()
{
	printf("================================================== \n");
}
void input()
{
	// Input
	printf("Masukkan jumlah baris bintang : ");
}

int loop (int input)
{
	// Process (For Loop)  ---> Output
	for(int baris = 1; baris<=input ; baris++)
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
			printf("*");
			
			
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
}

int main()
{
	// Deklarasi
	int bintang;
	
	// Memanggil fungsi tanpa kembalian (void) ---> void dekorasi
	dekorasi();
	
	// Nama Program
	printf("\t PROGRAM SEGITIGA SIKU-SIKU BAWAH \n");
	
	dekorasi(); printf("\n");
	
	// Memanggil fungsi tanpa kembalian (void) ----> void input
	input();
	
	// Menyimpan data yang dimasukkan oleh user
	scanf("%d", &bintang);
	
	printf("\a \n");
	
	// Memanggil fungsi dengan kembalian (subrutin) ---> int loop
	loop(bintang);
	
	// Program Selesai
	printf("------------------------------------------------- \n\n");
	printf("Terima kasih telah meggunakan program ini ^_^");
	
	return 0;
}