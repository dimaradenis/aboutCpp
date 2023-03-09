#include <stdio.h>

int main()
{
    int pilih, amount_arr, total, rata;
    int data[100];
    int i, x;

    printf("-----------------------------\n");
    printf("     PROGRAM STATISTIKA      \n");
    printf("-----------------------------\n\n");

    printf("Selamat Datang diprogram Statistika\n");
    printf(" Pilih Program yang anda inginkan \n");
    printf("1.Menghitung Nilai Rata Rata\n");
    printf("2.Menghitung Modus\n");
    printf("Masukan Pilihan :");
    scanf("%d", &pilih);

    printf("\n\n");

    if (pilih = 1)
    {
        /* code */
        printf(" Masukan Jumplah Nilai :");
        scanf("%d", &amount_arr);
        printf(" Masukan Nilai:\n");

        // Menginputkan Data Nilai
        for (i = 0; i < amount_arr; i++)
        {
            /* code */
            scanf("%d", &data[i]);
        }

        // Menghitung total Nilai dari Data
        total = 0;
        for (i = 0; i < amount_arr; i++)
        {
            /* code */
            total = total + data[i];
        }

        // Hasil rata rata
        rata = (total / amount_arr);
        printf("Nilai rata rata : %d", rata);
    }
    else
    {
    	int n,nilai,banyak[100],k=1,x,modus[100];
    	printf("Masukan Jumplah Bilangan");
    	scanf("%d",&n);
    	printf("\n");
    	
    	for ( i = 0;i<n;i++)
    	{
    		printf("Masukan Bilangan ke");
    		printf("%d",i+1);
    		printf("=");
    		scanf("nilai[i]");
		}
    	
    	//banyak muncul
		for( i=0;i<n;i++)
		{
			if(banyak[i]>k)
			{
				k=banyak[i];
			}
		}
		//sama banyak
		int z =0;
		for (i=0;i<n;i++)
		{
			if(banyak[i]==k)
			{
				z++;
			}
		}
		
		if(z==n)
		{
			x=0;
		}
		
		if(x==0)
		{
		printf("\nTidak Ada Modus\n");
		}
		else
		{
			printf("\n Modus ada %d" ,x);
			for(i=0;i<x;i++)
			{
				printf("Modus = %d \n",modus[i]);
			}
		}
    }
    return 0;
}
