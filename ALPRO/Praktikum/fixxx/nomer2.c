#include <stdio.h>

int main()
{
	// Deklarasi
    int umur;
    
    // Nama Anggota Kelompok
	printf("Kelompok 9 \n");
	printf("Nama Anggota : \n");
	printf("1. Denis Lizard Sambawo Dimara (21081010159) \n");
	printf("2. Dzaru Rizky Fathan Fortuna  (21081010283) \n\n");
	
	// Nama Program
	printf("=======================================================\n");
	printf("\t PROGRAM MENENTUKAN KRITERIA UMUR ANDA \n");
	printf("=======================================================\n\n");
	
	// Input
    printf("Masukkan umur anda : ");
    scanf("%d", &umur);
    
    printf ("------------------------------------------------------ \n\a");
    // IF Else --> Output
    if (umur >= 1 && umur <= 16)
    {
        printf("Anak - Anak");
    }

    else if (umur >= 17  && umur <= 25)
    {
        printf("Remaja");
    }

    else if (umur >= 26  && umur <= 45)
    {
        printf("Dewasa");
    }
    else if (umur >= 45)
    {
        printf("Tua Banget");
    }
    else 
	{
		// Output ---> Jika user menginputkan angka < 1 
		printf("Maaf, input yang Anda masukkan salah \n");
		printf("Silakan lakukan ulang kembali program");
    	
	}
	printf("\n\nTerima kasih telah menggunakan program kami ^_^");
    return 0;
}
