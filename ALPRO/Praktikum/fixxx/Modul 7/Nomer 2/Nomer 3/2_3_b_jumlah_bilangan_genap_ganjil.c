#include <stdio.h>

void dekorasi1()
{
	printf("=================================================================== \n");
}

void dekorasi2()
{
	printf("------------------------------------------------------------------- \n");
}

void output1()
{
	printf("Jumlah bilangan genap  : ");
}

void output2()
{
	printf("Jumlah bilangan ganjil : ");
}

int process(int input)
{
	int output;
	int bilangan[input];
	int genap = 0, ganjil = 0;
		
	for(int loop = 0; loop < input; loop++)
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
	printf("3. Genap dan Ganjil \n");
	printf("Pilih jumlah bilangan yang mau dikeluarkan (1/2/3)? ");
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
	else if(output == 3)
	{
		output1(); printf("%d \n", genap);
		output2(); printf("%d \n", ganjil);
	}
	return process;
}

int main()
{
	int jumlah, output;
	int genap = 0, ganjil = 0;
	
	dekorasi1();
	printf("|\t PROGRAM MENENTUKAN JUMLAH BILANGAN GENAP & GANJIL        | \n");
	dekorasi1(); printf("\n");
	
	printf("Masukkan jumlah bilangan : ");
	scanf("%d", &jumlah);
	
	dekorasi2();
	process(jumlah);
	
	dekorasi2();
	printf("\nTerima kasih telah menggunakan program ini ^_^");
	return 0;
}