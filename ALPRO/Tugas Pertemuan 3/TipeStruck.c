/*
Nama    : Denis Lizard Sambawo Dimara
NPM     : 21081010159
Kelas   : Algoritma dan Pemrograman J081
File    : Tugas Pemrograman 2
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct

{
    /* data */
    char prodi[50];
    char nama[50];
    char alamat[50];
} data_mahasiswa;

data_mahasiswa mahasiswa1, mahasiswa2; // mendeklarasikan variable struct

int main()
{
    // inputkan data mahasiswa
    printf("Data Mahasiswa Pertama\n");
    printf("----------------------\n");
    printf("Nama\t\t:");
    scanf("%s", &mahasiswa1.nama);
    printf("Prodi\t\t:");
    fflush(stdin);
    gets(mahasiswa1.prodi);
    printf("Alamat\t\t:");
    fflush(stdin);
    gets(mahasiswa1.alamat);
    printf("\n\n\n");

    printf("Data Mahasiswa Kedua\n");
    printf("----------------------\n");
    printf("Nama\t\t:");
    scanf("%s", &mahasiswa2.nama);
    printf("Prodi\t\t:");
    fflush(stdin);
    gets(mahasiswa2.prodi);
    printf("Alamat\t\t:");
    fflush(stdin);
    gets(mahasiswa2.alamat);
    printf("\n\n\n");

    // Output

    printf("----------------------------------\n");
    printf("----- DATA MAHASISWA PERTAMA -----\n");
    printf("----------------------------------\n\n");
    printf("Nama\t\t:%s\n", &mahasiswa1.nama);
    printf("Prodi\t\t:%s\n", &mahasiswa1.prodi);
    printf("Alamat\t\t:%s\n", &mahasiswa1.alamat);

    printf("\n\n");

    printf("----------------------------------\n");
    printf("------ DATA MAHASISWA KEDUA ------\n");
    printf("----------------------------------\n\n");
    printf("Nama\t\t:%s\n", &mahasiswa2.nama);
    printf("Prodi\t\t:%s\n", &mahasiswa2.prodi);
    printf("Alamat\t\t:%s\n", &mahasiswa2.alamat);

    printf("\n\n");

    system("PAUSE");
    return 0;
}
