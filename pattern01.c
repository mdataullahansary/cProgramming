#include <stdio.h>

int main(void) {
    int n, i, j;
    printf("Enter the line numbers: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        for (i = 0; i < n / 2; i++) {
            for (j = 0; j <= i; j++) {
                printf("* ");
            }
            printf("\n");
        }
        for (i = 1; i <= n / 2; i++) {
            for (j = 1; j <= n / 2 - i + 1; j++) {
                printf("* ");
            }
            printf("\n");
        }
    } else {
        for (i = 0; i < n / 2 + 1; i++) {
            for (j = 0; j <= i; j++) {
                printf("* ");
            }
            printf("\n");
        }
        for (i = 1; i <= n / 2; i++) {
            for (j = 1; j <= n / 2 - i + 1; j++) {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}