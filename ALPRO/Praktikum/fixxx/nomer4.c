#include <stdio.h>
#include <string.h>

struct jumlah_kesempatan
{
	int a, b, c;
};
int main ()
{
	// Deklarasi
	int jawab1, jawab2, jawab3;
	char petunjuk_permainan[21], bilangan[9], angka[6], jawaban_benar[28], jawaban_salah[24],  
	input_salah[36], sisa_kesempatan[32], hasil_kesempatan[19], kali[5], kesempatan[11], 
	lagi[5], keren[6], permainan[10], input_angka[24];
	
	// Struct
	struct jumlah_kesempatan jk;
	jk.a = 1;
	jk.b = 2;
	jk.c = 3;
	
	// Nama Anggota Kelompok
    printf("Kelompok ?? \n");
    printf("Nama Anggota : \n");
    printf("%d. Denis Lizard Sambawo Dimara (21081010159) \n", jk.a);
    printf("%d. Dzaru Rizky Fathan Fortuna  (21081010283) \n\n", jk.b);

	
	// Strcpy --> digunakan untuk efisiensi memori
	strcpy(petunjuk_permainan, "Pengguna hanya dapat");
	strcpy(bilangan, "bilangan");
	strcpy(angka, "angka");
	strcpy(input_angka, "Masukkan angka (1-99) :");
	strcpy(jawaban_benar, "Selamat tebakanmu benar ^_^");
	strcpy(jawaban_salah, "Maaf tebakanmu salah :(");
	strcpy(input_salah, "Maaf input yang Anda masukkan salah");
	strcpy(sisa_kesempatan, "Kesempatan Anda menebak tersisa");
	strcpy(hasil_kesempatan, "Anda menebak dalam");
	strcpy(kali, "kali");
	strcpy(lagi, "lagi");
	strcpy(kesempatan, "kesempatan");
	strcpy(keren, "Keren");
	strcpy(permainan, "Permainan");
	
	// Nama Program
	printf("======================================================== \n");
	printf("\t   GAME MENEBAK NOMER KELOMPOK KAMI \n");
	printf("======================================================== \n\n");
	printf("Petunjuk %s \n", permainan);
	printf("%d. %s menginput %s antara %d-99 \n", jk.a, petunjuk_permainan, angka, jk.a);
	printf("%d. %s menebak sebanyak %d kali kesempatan \n\n", jk.b, petunjuk_permainan, jk.c);
	
	printf("Clue Jawaban %s : \n", permainan);
	printf("%d. Merupakan %s ganjil \n", jk.a, bilangan);
	printf("%d. Termasuk %s prima \n",jk.b, bilangan);
	printf("%d. Kelipatan %s 3 \n\n", jk.c, bilangan);
	
	printf("-------------------------------------------------------- \n");
	
	// Kesempatan 1
	printf("%s ", input_angka);	
	scanf("%d", &jawab1);
	
	// If Else ---> Output
	if (jawab1 == 9)
	{
		printf("\a");
		printf("%s \n", jawaban_benar);
		printf("%s banget, %s %d %s %s \n\n", keren, hasil_kesempatan, jk.a, kali, kesempatan);
	}
	// Nested If Else 1
	else 
	{
		if (jawab1 <= 99 && jawab1 >= 1)
		{
			printf("%s \n", jawaban_salah);
		}
		else
		{
			printf("%s \n", input_salah);
		}
		
		printf("%s %d %s %s \n\n", sisa_kesempatan, jk.b, kali, lagi);
		
		// Kesempatan 2
		printf("%s ", input_angka);
		scanf("%d", &jawab2);
		
		// Nested IF Else 2
		if (jawab2 == 9)
		{
			printf("\a");
			printf("%s \n", jawaban_benar);
			printf("%s, %s %d %s %s \n\n", keren, hasil_kesempatan, jk.b, kali, kesempatan);
		}
		else 
		{
			if (jawab2 <= 99 && jawab2 >= 1)
			{
				printf("%s \n", jawaban_salah);
			}
			else
			{
				printf("%s \n", input_salah);
			}
			
			printf("%s %d %s %s \n\n", sisa_kesempatan, jk.a, kali, lagi);
		
		// Kesempatan 3
			printf("%s ", input_angka);
			scanf("%d", &jawab3);
			
			// Nested If Else 3
			if (jawab3 == 9)
			{
				printf("\a");
				printf("%s \n", jawaban_benar);
				printf("Akhirnya, %s %d %s %s \n\n", hasil_kesempatan, jk.c,kali, kesempatan);
			}
			else 
			{
				if (jawab3 <= 99 && jawab3 >= 1)
				{
					printf("%s \n", jawaban_salah);
				}	
				else
				{
					printf("%s \n", input_salah);
				}
					printf("%s Anda menebak telah habis \n\n", kesempatan);
					printf("\aJawaban yang benar kami adalah kelompok 9 \n", jk.a);
			}
		}
	}
	printf("--------------------------------------------------------\n\n");
	printf("Terima kasih telah menggunakan program kami ^_^ ");
	return 0;
}
