#include <stdio.h>

int main()
{
    int t, x, y;

    printf("-- PIRAMID --\n");
    printf("tinggi :");
    scanf("%d", &t);

    for (x = 1; x <= t; x++)
    {
        for (y = t; y >= x; y--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}