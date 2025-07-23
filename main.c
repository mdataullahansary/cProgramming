// 1
// 3 2
// 6 5 4
// 10 9 8 9

#include <stdio.h>

int main() {
    int n;
    int num = 1;
    printf("Enter the rows no :  ");
    scanf("%d" , &n);

    for (int i = 1; i <= n; i++) {
        int start = num + i - 1;
        for (int j = 0; j < i; j++) {
            printf("%d ", start - j);
        }
        num += i;
        printf("\n");
    }

    return 0;
}
