


#include <stdio.h>
void main () {
    int i, j, n;
    printf("Enter the number of rows and columns of matrix :  ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if ((i+j) % 2 == 0) {
                printf("X ");
            } else {
                printf("O ");
            }
        }
        printf("\n");
    }
}