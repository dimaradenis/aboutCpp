/* Tugas Praktikum 2
   Algoritma dan Pemograman J081
   
   Anggota Kelompok 9:
   1. Denis Lizard Sambawo Dimara (21081010159)
   2. Dzaru Rizky Fathan Fortuna  (21081010283)
  
   Modul 7 (Nomer 2)
   Nomer 1 - Tanpa passing parameter 
   
*/

void dekorasi1()
{
	printf("==================================================== \n");
}

void input()
{
	printf("Masukkan jumlah bilangan genap : ");
}

#include <stdio.h>

int main()
{
	
	// Deklarasi   
	int genap;
	
	// Nama Program
	dekorasi1();
	printf("\t PROGRAM MENAMPILKAN BILANGAN GENAP \n");
	dekorasi1(); printf("\n");
	
	// Input
	input();
	scanf("%d", &genap);
	
	printf("\a \n");
	
	// Process (For Loop)  ---> Output
	
	for (int i = 1; i<=(2*genap); i++)
	/* Melakukan pengulangan 2x kelipatan dari jumlah bilangan 
	   yang diinputkan oleh user
	   
	   Misal 
	   Input : 4
	   Loop  : 8
	*/
	{
		if(i%2 == 0)
		{
			// Melakukan perhitungan untuk mencari bilangan genap 
			
			/* Dari misal diatas pastinya dari 8 bilangan yang termasuk
			   bilangan genap adalah jumlah 1/2 dari bilangan  
			   
			   Loop   : 8
			   Output : 2, 4, 6, 8 */
			   
			printf("%d", i); // Output
			
			if(i < 2*genap)
			{
				/* IF ini digunakan untuk koma(, ) tidak muncul 
				   di akhir bilangan genap yang terakhir */
				   
				printf(", ");
			}	
		}	
	}
	
	// Program Selesai 
	printf("\n");
	printf("----------------------------------------------------- \n\n");
	printf("Terima kasih telah menggunakan program kami ^_^");
	
	return 0;
}