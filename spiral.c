//1 2 3 4 5
//10 9 8 7 6
//11 12 13 14 15
//20 19 18 17 16
//21 22 23 24 25

#include <stdio.h>

int main() {
    int n,i,j;
    printf("Enter a rows no :  ");
    scanf("%d", &n);

    int a = 1;
    for (i = 1; i <= n; i++) {
        if (i % 2 != 0) {

            for (j = 1; j <= n; j++) {
                printf("%d ", a++);
            }
        } else {

            int b = a + n - 1;
            for ( j = 1; j <= n; j++) {
                printf("%d ", b--);
                a++;
            }
        }
        printf("\n");
    }
    return 0;
}