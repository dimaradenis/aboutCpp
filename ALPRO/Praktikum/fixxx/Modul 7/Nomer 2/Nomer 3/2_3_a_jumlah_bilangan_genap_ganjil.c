/* Tugas Praktikum 2
   Algoritma dan Pemograman J081
   
   Anggota Kelompok 9:
   1. Denis Lizard Sambawo Dimara (21081010159)
   2. Dzaru Rizky Fathan Fortuna  (21081010283)
  
   Modul 7 (Nomer 2)
   Nomer 3 - Tanpa passing parameter 
*/

#include <stdio.h>

void dekorasi1()
{
	printf("=================================================================== \n");
}

void dekorasi2()
{
	printf("------------------------------------------------------------------- \n");
}

void input1()
{
	printf("Masukkan jumlah bilangan : ");	
}

void input3()
{
	printf("Pilih jumlah bilangan mana yang mau dikeluarkan (1/2/3)? ");
}

void output1()
{
	printf("Jumlah bilangan genap  : ");
}

void output2()
{
	printf("Jumlah bilangan ganjil : ");
}

int main()
{
	int jumlah, output;
	int genap = 0, ganjil = 0;
	
	dekorasi1();
	printf("|\t PROGRAM MENENTUKAN JUMLAH BILANGAN GENAP & GANJIL        | \n");
	dekorasi1(); printf("\n");
	
	input1();
	scanf("%d", &jumlah);
	dekorasi2();
	
	int bilangan[jumlah];
	
	for(int loop = 0; loop < jumlah; loop++)
	{
		printf("Masukkan bilangan-%d : ", loop+1);
		scanf("%d", &bilangan[loop]);
		if(bilangan[loop] %2 == 0)
		{
			genap++;
		}	
		else
		{
			ganjil++;
		}
	}
	
	dekorasi2();
	
	printf("1. Genap \n");
	printf("2. Ganjil \n");
	printf("3. Ganjil dan Genap \n\n");
	input3();
	scanf("%d", &output);
	
	printf("\a \n");
	
	if(output == 1)
	{
		output1(); printf("%d \n", genap);
	}
	else if(output == 2)
	{
		output2(); printf("%d \n", ganjil);
	}
	else if (output == 3)
	{
		output1(); printf("%d \n", genap);
		output2(); printf("%d \n", ganjil);
	}
	else
	{
		printf("Maaf, input yang Anda masukkan salah \n");
		printf("Mohon lakukan ulang kembali program ini. \n");
	}
	
	dekorasi2();
	printf("\nTerima kasih telah menggunakan program kami ^_^");
	return 0;
}