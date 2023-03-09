#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

COORD coord = {X : 0, Y : 0};

void gotoxy(int i, int j)
{
    coord.X = i;
    coord.Y = j;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE).coord);
}

int main()
{

    // Mendeklarasikan Matriks 3 Baris 3 Kolom
    int a[3][3];
    int b[3][3];
    int c[3][3];
    int i, j;

    // Menginputkan Data
    printf("---------------\n");
    printf("Matriks Pertama\n");
    printf("---------------\n");

    // Looping untuk penempatan Matriks
    for (i = 0; i < 3; i++) // Loop Luar
    {
        /* code */
        for (j = 0; i < 3; j++) // Loop Dalam
        {
            /* code */
            gotoxy(j * 5 + 1, i + 3);
            scanf("%i", &a[i][j]);
        }
    }

    // Menginputkan Data
    printf("\n\n");
    printf("-------------\n");
    printf("Matriks Kedua\n");
    printf("-------------\n");

    // Looping untuk penempatan Matriks
    for (i = 0; i < 3; i++) // Loop Luar
    {
        /* code */
        for (j = 0; i < 3; j++) // Loop Dalam
        {
            /* code */
            gotoxy(j * 5 + 1, i + 9);
            scanf("%i", &b[i][j]);
        }
    }

    // proses
    for (i = 0; i < 3; i++) // Loop Luar
    {
        /* code */
        for (j = 0; i < 3; j++) // Loop Dalam
        {
            /* code */
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    // Output Data
    system("cls");
    printf("-------");
    printf("MATRIKS");
    printf("-------");

    for (i = 0; i < 3; i++)
    {
        /* code */
        for (j = 0; i < 3; j++)
        {
            /* code */
            gotoxy(j * 5 + 1, i + 3);
            printf("%i", c[i][j]);
        }
    }

    printf("\n\n");
    system("PAUSE");
    return 0;
}
