/* 	Klasifikasi Nilai Mahasiswa
	85 - 100 : A
	70 - 84  : B
	60 - 69  : C
	50 - 59  : D
	40 - 49  : E
*/
#include <stdio.h>
int main()
{
    // Deklarasi
    int nilai;

    // Nama Anggota Kelompok
    printf("Kelompok 9 \n");
    printf("Nama Anggota : \n");
    printf("1. Denis Lizard Sambawo Dimara (21081010159) \n");
    printf("2. Dzaru Rizky Fathan Fortuna  (21081010283) \n\n");

    //  Nama Program
    printf("=============================================== \n");
    printf("\t PROGRAM CONVERT NILAI MAHASISWA \n");
    printf("=============================================== \n\n");
    
    // Input
    printf("Masukkan Nilai Mahasiswa : ");
    scanf("%d", &nilai);
    
    // If Else ---> Output
    printf("\a");
    printf("Nilai Huruf \t\t : ");
    
	if (nilai>=40 && nilai<50)
	{
		printf("E");
	}        
	else if (nilai>=50 && nilai<60)
	{
		printf("D");
	}
	else if (nilai>=60 && nilai<70)
	{
		printf("C");
	}
	else if (nilai>=70 && nilai<85)
	{
		printf("B");
	}
	else if (nilai>=85 && nilai<=100)
	{
		printf("A");
	}
	else 
	{
		// Output --- > Jika user menginputkan nilai < 40 && nilai > 100
		printf("Invalid!");
	}
	printf("\n-----------------------------------------------\n");
	printf("Terima kasih telah menggunakan program kami ^_^");
    return 0;
}
