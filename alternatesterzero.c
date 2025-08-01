#include <stdio.h>

int main() {
    char arr[5];
    int indexOfArray = 0;
    const int sizeOfArray = 5;
    int choice;
    char ch;

    do {
        printf("\nMenu:\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            if (indexOfArray < sizeOfArray) {
                printf("Enter character to insert: ");
                scanf(" %c", &ch);
                arr[indexOfArray] = ch;
                printf("Inserted '%c'\n", ch);
                indexOfArray++;
            } else {
                printf("Array is full.\n");
            }

        } else if (choice == 2) {
            if (indexOfArray > 0) {
                indexOfArray--;
                printf("Deleted '%c'\n", arr[indexOfArray]);
            } else {
                printf("Array is empty.\n");
            }

        } else if (choice == 3) {
            if (indexOfArray == 0) {
                printf("Array is empty.\n");
            } else {
                // for (int i = 0; i < sizeOfArray; i++) {
                //     printf("  %d  ", i);
                // }
                // printf("\n");

                for (int i = 0; i < sizeOfArray; i++) {
                    printf("+-----");
                }
                printf("+\n");

                for (int i = 0; i < sizeOfArray; i++) {
                    if (i < indexOfArray) {
                        printf("|  %c  ", arr[i]);
                    } else {
                        printf("|     ");
                    }
                }
                printf("|\n");

                for (int i = 0; i < sizeOfArray; i++) {
                    printf("+-----");
                }
                printf("+\n");

                // printf("Current size: %d\n", indexOfArray);
            }

        } else if (choice == 4) {
            printf("Exiting...\n");
        } else {
            printf("Invalid choice.\n");
        }

    } while (choice != 4);

    return 0;
}
