/*
Nama    : Denis Lizard Sambawo Dimara
NPM     : 21081010159
Kelas   : Algoritma dan Pemrograman J081
File    : Tugas Pemrograman 2
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char A[100], Prodi[100];
    strcpy(A, "UNIVERSITAS PEMBANGUNAN NASIONAL JAWA TIMUR");
    char nama[100], alamat[100];
    long int nim;

    printf("------------------------------------------\n");
    printf("-------- BIODATA MAHASISWA UPNVJT --------\n");
    printf("------------------------------------------\n");
    printf("Masukan Nama \t\t:\n");
    gets(nama);
    printf("Masukan Program studi\t\t\n:");
    fscanf(stdin, "%s", &Prodi);
    printf("Masukan Alamat\t\t:");
    fscanf(stdin, "%s", &alamat);

    printf("------------------------------------------\n");
    printf("Nama\t\t\t:%s\n", nama);
    printf("NPM\t\t\t:%s\n", Prodi);
    printf("Universitas\t\t:%s\n", A);
    printf("Alamat\t\t\t:%s\n", alamat);

    return 0;
}
