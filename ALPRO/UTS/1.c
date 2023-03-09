/*
Nama : Denis Lizard Sambawo Dimara
Kelas: J081
NPM  : 21081010159
 */

#include <stdio.h>

int main()
{
    int hour1, hour2, minute1, minute2, convert1, convert2, selisih;

    printf("-------------------------\n");
    printf("Program selisih kedua Jam\n");
    printf("-------------------------\n");

    printf("\n");
    printf("Masukan jam , jam pertama : ");
    scanf("%d", &hour1);
    printf("Masukan menit ,jam pertama: ");
    scanf("%d", &minute1);

    printf("\n");
    printf("Masukan jam . jam kedua : ");
    scanf("%d", &hour2);
    printf("Masukan menit ,jam kedua: ");
    scanf("%d", &minute2);

    // inisialisasi variable
    convert1 = (hour1 * 60) + minute1;
    convert2 = (hour2 * 60) + minute2;

    selisih = convert2 - convert1;
    printf("\n");
    printf("Jam ke-1\t\t\t: %d jam\n", hour1);
    printf("menit ke-1\t\t\t: %d menit\n", minute1);

    printf("Jam ke-2\t\t\t: %d jam\n", hour2);
    printf("menit ke-2\t\t\t: %d menit\n", minute2);

    printf("Selisih kedua jam tersebut\t: %d", selisih);
    return 0;
}