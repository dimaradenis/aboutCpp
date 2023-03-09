#include <stdio.h>
#include <string.h>

struct bilangan
{
	int x, y;
};
int main ()
{
	// Deklarasi
	int pilih, output;
	float rumus, a, b;
	char segitiga[14], persegi_panjang[21], jajar_genjang[19], 
	belah_ketupat[19], layang_layang[19], alas[10], tinggi[10],
	adalah[7], diagonal[9];
	
	// Struct
	struct bilangan bil;
	bil.x = 1;
	bil.y = 2;
	
	// Nama Anggota Kelompok
    printf("Kelompok 9 \n");
    printf("Nama Anggota : \n");
    printf("%d. Denis Lizard Sambawo Dimara (21081010159) \n", bil.x);
    printf("%d. Dzaru Rizky Fathan Fortuna  (21081010283) \n\n", bil.y);

    // Nama Program
    printf("=============================================== \n");
    printf("\t    KALKULATOR BANGUN DATAR \n");
    printf("=============================================== \n\n");
    
    // Strcpy ---> Untuk efisiensi memori
	strcpy(segitiga, "Luas Segitiga");
	strcpy(persegi_panjang, "Luas Persegi Panjang");
	strcpy(jajar_genjang, "Luas Jajar Genjang");
	strcpy(belah_ketupat, "Luas Belah Ketupat");
	strcpy(layang_layang, "Luas Layang-Layang");
	strcpy(alas, "Alas    :");
	strcpy(tinggi, "Tinggi  :");
	strcpy(adalah, "adalah");
	strcpy(diagonal, "Diagonal");
	
	// Input
	printf("--- PILIH RUMUS ---\n\n");
    printf("%d. %s \n", bil.x, segitiga);
    printf("%d. %s \n", bil.y, persegi_panjang);
    printf("3. %s \n", jajar_genjang);
    printf("4. %s \n", belah_ketupat);
    printf("5. %s \n\n", layang_layang);
    printf("Masukan Pilihan Anda : ");
    scanf("%d", &pilih);
    
    printf("------------------------------------------------- \n");
    output = pilih;
    
    // IF Else ---> Output
    if (pilih == 1 || pilih == 4 || pilih == 5)
	{
		// Input pilihan 1, 4, 5
		if (pilih == 1) // Segitiga
		{
			printf("%s ", alas);
			scanf("%f", &a);
			printf("%s ", tinggi);
			scanf("%f", &b);
		}
		else // Belah Ketupat dan Layang-Layang
		{
			printf("%s %d  : ", diagonal, bil.x);
			scanf("%f", &a);
			printf("%s %d  : ", diagonal, bil.y);
			scanf("%f", &b);
		}
		rumus = 0.5*a*b; // Rumus pilihan 1, 4, 5
		printf("\a \n");
		// Output pilihan 1, 4, 5
		if (output == 1)
		{
			printf("%s %s %.2f", segitiga, adalah, rumus);
		}
		else if (output == 4)
		{
			printf("%s %s %.2f", belah_ketupat, adalah, rumus);
		}
		else 
		{
			printf("%s %s %.2f", layang_layang, adalah, rumus);
		}
	}
	else if (pilih == 2 || pilih == 3)
	{
		// Input pilihan 2, 3
		if (pilih == 2) // Persegi Panjang
		{
			printf("Panjang : ");
			scanf("%f", &a);
			printf("Lebar   : ");
			scanf("%f", &b);
		} 
		else // Jajar Genjang
		{
			printf("%s ", alas);
			scanf("%f", &a);
			printf("%s ", tinggi);
			scanf("%f", &b);
		}
		rumus = a*b;
		// Output pilihan 2, 3
		printf("\a \n");
		if (output == 2)
		{
			printf("%s %s %.2f", persegi_panjang, adalah, rumus);
		}
		else 
		{
			printf("%s %s %.2f", jajar_genjang, adalah, rumus);
		}
	}
	else  // Output -- > Jika user mengiputkan yang dimasukkan di input 'pilih rumus' bilangan <1 || bilangan >5 
	{
		printf("Maaf input yang Anda masukkan salah \n");
		printf("Mohon lakukan ulang kembali program\n");
	}
	
	printf("\n------------------------------------------------- \n");
	printf("Terima kasih telah menggunakan program kami ^_^\n");
	
	return 0;
}