#include <stdio.h>
int main () {
    char st[5];
    int i;
    int sizeOfStack= 5;
    int top = 0;
    char c;
    for( i = 0; i < 5; i++) {
        printf("Enter a character: ");
        scanf(" %c" , &c);
        top= top + 1;
        st[top] = c;


    }

    for ( i = top; i >= 1; i--) {
        printf("%c ", st[i]);
        printf("\n");
    }
    return 0;
}