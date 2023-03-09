/*
Nama    : Denis Lizard Sambawo Dimara
NPM     : 21081010159
Kelas   : Algoritma dan Pemrograman J081
File    : Tugas Pemrograman 2
*/

#include <stdio.h>
#include <math.h>
int main()
{
    // deklarasi sudut ,kecepatan ,rad penembakan
    float sudut, kecepatan, rad, jarak;
    const float phi = 3.14;
    const float g = 9.8;

    // Tampilan Awal
    printf("------------------------------------------------------------\n");
    printf("----- SELAMAT DATANG DIPROGRAM MENGHITUNG JARAK PELURU -----\n");
    printf("------------------------------------------------------------\n\n");

    // Menu Inputkan Data
    printf("Masukan Sudut Tembakan\t\t:");
    scanf("%f", &sudut);
    printf("Masukan Kecepatan Tembakan\t:");
    scanf("%f", &kecepatan);

    // menginisialisasi value rad dan jarak
    rad = sudut * phi / 180;
    jarak = 2 * pow(kecepatan, 2) * sin(rad) * cos(rad) / g;

    // ouput
    printf("\n\n");
    printf("Jarak Peluru adalah %f", jarak);

    return 0;
} // peluru.c
