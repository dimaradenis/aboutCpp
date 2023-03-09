#include <stdio.h>
#include <string.h>

int main()
{
	char warna1[50], warna2[50],warna3[50];
	
	//Menginisialisasi value variable
	strcpy(warna1 ,"Merah");
	
	printf("Masukan Warna 2\t:");
	scanf("%s" ,&warna2);
	
	printf("Masukan Warna 3\t:");
	scanf("%s",&warna3);
	
	printf("\n--------------------\n");
	
	//Menukar Isi Variable Menggunakan Strcpy
	strcpy(warna2 , warna1);//isi value variable warna1 dipindahkan ke variable warna2
	strcpy(warna3 , warna2);//isi value variable warna2 dipindahkan ke variable warna3
	
	printf("Warna3 adalah %s\n",warna3);
	printf("Warna2 adalah %s\n",warna2);
	printf("Warna1 adalah %s\n",warna1);
	
return 0;
}
