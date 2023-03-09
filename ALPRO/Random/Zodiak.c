#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tgl, bln;

    printf("Masukkan tanggal \t\t\t: ");
    scanf("%d", &tgl);
    printf("Masukkan bulan dalam angka 1 - 12 \t: ");
    scanf("%d", &bln);

    if (bln == 1)
    {
        if (tgl >= 1 && tgl <= 19)
        {
            printf("Capricorn");
        }
        else if (tgl >= 20 && tgl <= 31)
        {
            printf("Aquarius");
        }
    }
    else if (bln == 2)
    {
        if (tgl >= 1 && tgl <= 18)
        {
            printf("Aquarius");
        }
        else if (tgl >= 19 && tgl <= 29)
        {
            printf("Pisces");
        }
    }
    else if (bln == 3)
    {
        if (tgl >= 1 && tgl <= 20)
        {
            printf("Pisces");
        }
        else if (tgl >= 21 && tgl <= 31)
        {
            printf("Aries");
        }
    }
    else if (bln == 4)
    {
        if (tgl >= 1 && tgl <= 19)
        {
            printf("Aries");
        }
        else if (tgl >= 20 && tgl <= 30)
        {
            printf("Taurus");
        }
    }
    else if (bln == 5)
    {
        if (tgl >= 1 && tgl <= 20)
        {
            printf("Taurus");
        }
        else if (tgl >= 21 && tgl <= 31)
        {
            printf("Gemini");
        }
    }
    else if (bln == 6)
    {
        if (tgl >= 1 && tgl <= 21)
        {
            printf("Gemini");
        }
        else if (tgl >= 22 && tgl <= 30)
        {
            printf("Cancer");
        }
    }
    else if (bln == 7)
    {
        if (tgl >= 1 && tgl <= 22)
        {
            printf("Cancer");
        }
        else if (tgl >= 23 && tgl <= 31)
        {
            printf("Leo");
        }
    }
    else if (bln == 8)
    {
        if (tgl >= 1 && tgl <= 22)
        {
            printf("Leo");
        }
        else if (tgl >= 23 && tgl <= 31)
        {
            printf("Virgo");
        }
    }
    else if (bln == 9)
    {
        if (tgl >= 1 && tgl <= 22)
        {
            printf("Virgo");
        }
        else if (tgl >= 22 && tgl <= 30)
        {
            printf("Libra");
        }
    }
    else if (bln == 10)
    {
        if (tgl >= 1 && tgl <= 22)
        {
            printf("Libra");
        }
        else if (tgl >= 23 && tgl <= 31)
        {
            printf("Scorpio");
        }
    }
    else if (bln == 11)
    {
        if (tgl >= 1 && tgl <= 22)
        {
            printf("Scorpio");
        }
        else if (tgl >= 23 && tgl <= 30)
        {
            printf("Sagitarius");
        }
    }
    else if (bln == 12)
    {
        if (tgl >= 1 && tgl <= 21)
        {
            printf("Sagitarius");
        }
        else if (tgl >= 22 && tgl <= 31)
        {
            printf("Capicorn");
        }
    }
}
