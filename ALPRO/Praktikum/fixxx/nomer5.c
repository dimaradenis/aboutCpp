#include <stdio.h>
#include <string.h>

struct bilangan
{
	int x, y;
};
int main (){
	// Deklarasi
	int pilih;
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
    
    // Switch Case ---> Output
    switch(pilih)
	{
		case 1:
			printf("%s ", alas);
			scanf("%f", &a);
			printf("%s ", tinggi);
			scanf("%f", &b);
			rumus = 0.5*a*b; // Luas Segitiga = 1/2*alas*tinggi
			printf("\a \n");
			printf("%s %s %.2f", segitiga, adalah, rumus);
			break;
		case 2:
			printf("Panjang : ");
			scanf("%f", &a);
			printf("Lebar   : ");
			scanf("%f", &b);
			rumus = a*b; // Luas Persegi Panjang = p*l
			printf("\a \n");
			printf("%s %s %.2f", persegi_panjang, adalah, rumus);
			break;
		case 3:
			printf("%s ", alas);
			scanf("%f", &a);
			printf("%s ", tinggi);
			scanf("%f", &b);
			rumus = a*b; // Luas Jajar Genjang = alas*tinggi;
			printf("\a \n");
			printf("%s %s %.2f", jajar_genjang, adalah, rumus);
			break;	
		case 4:	
			printf("%s %d  : ", diagonal, bil.x);
			scanf("%f", &a);
			printf("%s %d  : ", diagonal, bil.y);
			scanf("%f", &b);
			rumus = 0.5*a*b; // Luas Belah Ketupat = 1/2*d1*d2
			printf("\a \n");
			printf("%s %s %.2f", belah_ketupat, adalah, rumus);
			break;
		case 5:
			printf("%s %d  : ", diagonal, bil.x);
			scanf("%f", &a);
			printf("%s %d  : ", diagonal, bil.y);
			scanf("%f", &b);
			rumus = 0.5*a*b; // Layang-Layang = 1/2*d1*d2
			printf("\a \n");
			printf("%s %s %.2f", layang_layang, adalah, rumus);
			break;
		default: // Output -- > Jika user mengiputkan yang dimasukkan di input 'pilih rumus' bilangan <1 || bilangan >5 
			printf("Maaf input yang Anda masukkan salah \n");
			printf("Mohon lakukan ulang kembali program\n");
	}
	printf("\n------------------------------------------------- \n");
	printf("Terima kasih telah menggunakan program kami ^_^\n");
	return 0;
	
}