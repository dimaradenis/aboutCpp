#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Mengdeklarasikan struct

    struct mahasiswa
    {
        /* data */
        char nama[50];
        char namaortu[50];
        char noortu[15];
        char NIS[15];
    };

    struct mahasiswa mhs[10];
    int jmplh = 0;
    int i;

    // Tampilan Awal Program
    printf("===================================\n");
    printf(" PROGRAM PENCATATAN DATA MAHASISWA \n");
    printf("===================================\n\n");

    // Memasukan Jumplah Data yang ingin diinputkan
    printf("MASUKAN JUMPLAH DATA MAHASISWA :");
    scanf("%d", &jmplh);

    printf("\n\n------------------------------------");

    // Memasukan Data Mahasiswa
    for (i = 0; i < jmplh; i++)
    {
        /* code */
        printf("\nMASUKAN DATA MAHASISWA KE %d", i + 1);
        printf("\nNama Mahasiswa\t\t:");
        fflush(stdin); // Menggunakan fflush(stdin) digunakan untuk menghilangkan buffer , karna jika menggunakan scanf memiliki kelemahan jika menginputkan whitespace akan error
        gets(mhs[i].nama);
        printf("Nama Orang Tua\t\t:");
        fflush(stdin);
        gets(mhs[i].namaortu);
        printf("No Orangtua\t\t:");
        scanf("%s", &mhs[i].noortu);
        printf("NIS\t\t\t:");
        scanf("%s", &mhs[i].NIS);
    }
    // membersihan cmd
    system("cls");

    // Notif Jika Data Berhasil Diinputkan
    printf("-----------------------------");
    printf("\n   DATA BERHASIL DIINPUTKAN  ");
    printf("\n-----------------------------\n\n");

    printf("---------------------------------------------------------------------------------------------");
    printf("\n| Nama Mahasiswa\t|  Nama Orang Tua\t| No Orang Tua   \t| NIS           \t|");
    printf("\n---------------------------------------------------------------------------------------------s");

    // Output Data Mahasiswa Yang telat diInputkan Sebelumnya
    for (i = 0; i < jmplh; i++)
    {
        /* code */
        printf("\n| %s\t\t| %s\t\t| %s\t\t| %s\t\t| ", mhs[i].nama, mhs[i].namaortu, mhs[i].noortu, mhs[i].NIS);
    }
    printf("\n-------------------------------------------------------------------------------------------------");

    return 0;
}