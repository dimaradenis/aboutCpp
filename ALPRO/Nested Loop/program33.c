#include <stdio.h>
int main()
{
    int a, b, n;

    printf("Masukkan Tinggi Belah Ketupat: ");
    scanf("%d", &n);

    for (a = 1; a <= n; a++)
    {
        for (b = a; b <= n; b++)
        {
            printf(" ");
        }
        for (b = 1; b <= a; b++)
        {
            printf("*");
        }
        for (b = 1; b < a; b++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (a = 1; a < n; a++)
    {
        for (b = 0; b <= a; b++)
        {
            printf(" ");
        }
        for (b = a; b < n; b++)
        {
            printf("*");
        }
        for (b = a; b < n - 1; b++)
        {
            printf("*");
        }
        printf("\n");
    }
}