/*
Nama    : Denis Lizard Sambawo Dimara
NPM     : 21081010159
Kelas   : Algoritma dan Pemrograman J081
File    : Tugas Pemrograman 2
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 10;
    int y = 100;

    printf("x awal\t\t\t:%i\n\n", x);
    x++;
    printf("x++ diluar printf\t:%i\n", x);
    printf("x\t\t\t:%i\n\n", x);
    printf("x++ didalam printf\t:%i\n", x++);
    printf("x\t\t\t:%i\n\n", x);

    ++x;
    printf("++x diluar printf\t:%i\n", x);
    printf("x\t\t\t:%i\n\n", x);
    printf("++x didalam printf\t:%i\n", ++x);
    printf("x \t\t\t:%i\n\n", x);

    printf("x awal\t\t\t:%i\n\n", x);
    y--;
    printf("y-- diluar printf\t:%i\n", y);
    printf("y\t\t\t:%i\n\n", y);
    printf("y-- didalam printf\t:%i\n", y--);
    printf("y\t\t\t:%i\n\n", y);

    --y;
    printf("--y diluar printf\t:%i\n", y);
    printf("x\t\t\t:%i\n\n", y);
    printf("--y didalam printf\t:%i\n", --y);
    printf("y \t\t\t:%i\n\n", y);
    return 0;
}