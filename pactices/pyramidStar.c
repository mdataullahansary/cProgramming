#include <stdio.h>

void main() {
    int n = 3;
    int i, j;

// 1st pyramid
    for (i = 1; i <= n; i++) {

        for (j = 1; j <= n - i + 2; j++) {
            printf("  ");
        }


        for (j = 1; j <= 2 * i - 1; j++) {
            printf("* ");
        }

//  3rd  pyramid

        for (j = 1; j <= (n - i) * 2; j++) {
            printf("  ");
        }

         if ( i== n ) {
             for (i = 1; i <= n; i++) {
                 printf("* ");
             }
         }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("* ");
        }







        printf("\n");
    }

    //
    // for (i = 1; i <= 2; i++) {
    //
    //     for (j = 1; j <= (n + i + 1); j++) {
    //         printf("  ");
    //     }
    //
    //     for (j = 1; j <= 2 * (2 - i + 1) - 1; j++) {
    //         printf("* ");
    //     }
    //
    //     printf("\n");
    //}
}
