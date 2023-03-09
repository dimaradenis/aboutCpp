#include <stdio.h>

int main() {
    int weeks = 3, days_in_week = 7 ,i , j;

    for (int i = 1; i <= weeks; ++i) {
        printf ("Week: %d\t\n" , i );
        

        for (int j = 1; j <= days_in_week; ++j) {
            // continue if the day is an odd number
            if (j % 2 != 0) {
                continue;
            }
            printf ("Days: %d\n" , j );
          
        }
    }
}