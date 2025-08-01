#include <stdio.h>
char st[5];
const int sizeOfStack= 5;
int top = 0;


void display_stack( ) {
    int i;
    for ( i = 0; i < sizeOfStack-top; i++) {

        printf("+---+\n");
        printf("|   |\n");

    }

    for (i = top; i > 0; i--) {
        printf("+---+\n");
        printf("| %c |\n", st[i]);

    }
    printf("+---+\n");



}

int menu () {
    int choice;
    printf("Menu:\n");
    printf("1. Insert \n");
    printf("2. Delete \n");
    printf("3. Display \n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    if (scanf("%d", &choice) !=1) {

        printf("Invalid input. Please enter a number between 1 and 4.\n");
        return 4;

    }
    return choice;
}

void push ( ) {
    char c;
    if (top == sizeOfStack) {
        printf("Stack is full\n");
    } else {
        printf("Enter character to be inserted:  ");
        scanf(" %c" , &c);
        top = top + 1;
        st[top] = c;
        printf("\n Pushed %c \n", c);
    }
}
void pop ( ) {
    if (top != 0 ) {
        printf("\n Popped : %c\n", st[top]);

        top=top -1;
    } else {
        printf("\n Stack is empty\n");
    }

}


void main() {
    int choice;
    printf("\n\n  Implementation of Stack \n Size of Stack : 05 \n");


    do {
        choice = menu();
        switch (choice) {
            case 1:
                push( );
                break;
            case 2:
                pop( );
                break;
            case 3:
                display_stack( );
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice.\n");
                break;
        }
    } while (choice != 4);


}