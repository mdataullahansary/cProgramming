#include <acc_prof.h>
#include <stdbool.h>
#include <stdio.h>

void main () {
    int n, i , j;
    bool swap = true;
    printf("Enter number of lines: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for ( j = 1; j <= n; j++) {
            if (swap) {
                printf("X  ");
                swap= false;
            } else {
                printf(("O  "));
                swap = true;
            }
        }
        printf("\n");
    }



}
