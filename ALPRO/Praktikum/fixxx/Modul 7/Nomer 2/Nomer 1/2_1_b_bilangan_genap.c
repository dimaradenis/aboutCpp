/* Tugas Praktikum 2
   Algoritma dan Pemograman J081
   
   Anggota Kelompok 9:
   1. Denis Lizard Sambawo Dimara (21081010159)
   2. Dzaru Rizky Fathan Fortuna  (21081010283)
  
   Modul 7 (Soal Nomer 2)
   Nomer 1 - Dengan passing parameter 
*/

#include <stdio.h>

void dekorasi()
{
	printf("==================================================== \n");
}

void input()
{
	// Input
	printf("Masukkan Jumlah Bilangan Genap : ");
}

int loop(int i, int jumlah)
{
	// Process (For Loop)  ---> Output
	
	for (int i = 1; i<=(2*jumlah); i++)
	{
		/*  Melakukan pengulangan 2x kelipatan dari jumlah bilangan 
			yang diinputkan oleh user
			
	  		Misal 
	   		Input : 4
	   		Loop  : 8
		*/
		
		if(i%2 == 0)
		{
			// Melakukan perhitungan untuk mencari bilangan genap 
			
			/* Dari misal diatas pastinya dari 8 bilangan yang termasuk
			   bilangan genap adalah jumlah 1/2 dari bilangan  
			   
			   Loop   : 8
			   Output : 2, 4, 6, 8 */
			   
			printf("%d", i); // Output
			
			if(i < 2*jumlah)
			{
				/* IF ini digunakan untuk koma(, ) tidak muncul 
				   di akhir bilangan genap yang terakhir */
				   
				printf(", ");
			}	
		}
	}
	return loop;
}

int main()
{
	// Deklarasi
	int genap, output;
	
	// Memanggil fungsi tanpa kembalian (void) ---> void dekorasi
	dekorasi(); 
	
	// Nama Program
	printf("\t PROGRAM MENAMPILKAN BILANGAN GENAP \n");
	
	dekorasi(); printf("\n");
	
	// Memanggil fungsi tanpa kembalian (void) ----> void input
	input(); 
	
	// Menyimpan data yang dimasukkan oleh user
	scanf("%d", &genap); 
	
	printf("\a \n");
	
	// Memanggil fungsi dengan kembalian (subrutin) ---> int loop
	loop(output, genap); 
	
	// Program Selesai 
	printf("\n");
	printf("----------------------------------------------------- \n\n");
	printf("Terima kasih telah menggunakan program kami ^_^");
	
	return 0;
}