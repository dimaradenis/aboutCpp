#include <stdio.h>
int main()
{
    // Variable
    int nilai;

    // Nama Anggota Kelompok
    printf("Kelompok 10 \n");
    printf("Nama Anggota : \n");
    printf("1. Denis Lizard Sambawo Dimara (21081010159) \n");
    printf("2. Dzaru Rizky Fathan Fortuna  (21081010283) \n\n");

    // Tampilan Awal
    //  Judul Program
    printf("=============================================== \n");
    printf("\t PROGRAM CONVERT NILAI MAHASISWA \n");
    printf("=============================================== \n\n");
    printf("Masukkan nilai Mahasiswa :");
    scanf("%d", &nilai);

    printf("Nilai Huruf : ");
    if (nilai >= 0)
    {
        if (nilai >= 40)
        {
            if (nilai >= 50)
            {
                if (nilai >= 60)
                {
                    if (nilai >= 70)
                    {
                        if (nilai >= 85)
                        {
                            printf("A");
                        }
                        else
                        {
                            printf("B");
                        }
                    }
                    else
                    {
                        printf("C");
                    }
                }
                else
                {
                    printf("D");
                }
            }
            else
            {
                printf("E");
            }
        }
        else
        {
            printf("Invalid!");
        }
    }
}
