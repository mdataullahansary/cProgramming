#include <stdio.h>
    char arr[5];
    int indexOfArray = 0;
    int choice;



    const int sizeOfArray = 5;

int menu() {
    int choice;
    printf("\nMenu:\n");
    printf("1. Insert\n");
    printf("2. Delete\n");
    printf("3. Display\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    if (scanf("%d", &choice) !=1) {

        printf("Invalid input. Please enter a number between 1 and 4.\n");
        return 4;

    }
    return choice;
}

void display( ) {
int i;
    for ( i = 0; i < sizeOfArray; i++) {
        printf("+-----");
    }
    printf("+\n");

    for ( i = 0; i < sizeOfArray; i++) {
        if (i < indexOfArray) {
            printf("|  %c  ", arr[i]);
        } else {
            printf("|     ");
        }
    }
    printf("|\n");

    for ( i = 0; i < sizeOfArray; i++) {
        printf("+-----");
    }
    printf("+\n");
}

void insert( ) {
    char ch;
    if (indexOfArray < sizeOfArray) {
        printf("Enter character to insert: ");
        scanf(" %c", &ch);
        arr[indexOfArray] = ch;
        printf("Inserted '%c'\n", ch);
        indexOfArray= indexOfArray + 1;
    } else {
        printf("Array is full.\n");
    }
}

void deletion ( ) {
    if (indexOfArray > 0) {
        printf("Deleted '%c'\n", arr[indexOfArray - 1]);
        indexOfArray = indexOfArray - 1;
    } else {
        printf("Array is empty.\n");

    }
}

void main() {
    int choice;

    printf("\n\n  Implementation of Array Operations  \n");


    do {
        choice = menu();

            switch (choice) {
                case 1:
                    insert();
                    break;
                case 2:
                    deletion();
                    break;
                case 3:
                    display();
                    break;
                case 4:
                    printf("Exiting...\n");
                    break;

                default:
                    printf("Invalid choice.\n");
            }

    } while (choice != 4);

}
