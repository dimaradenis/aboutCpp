#include <stdio.h>

int main()
{
    int terbesar;
    int i;
    char data[][5][20] = {5, 4, 2, 5, 3, 8, 9, 2, 9, 8};
    terbesar = data[0];

    for (i = 0; i < 10; i++)
    {
        /* code */
        if (data[i] > data[0])
        {
            /* code */
            terbesar = data[i];
            printf("Terbesar %d", data[i]);
        }
    }
    return 0;
}