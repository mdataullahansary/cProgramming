#include <stdio.h>
#include <stdlib.h> // for system()



int menu() {
    int a;
    printf("\nMenu:\n");
    printf("1. Insert\n");
    printf("2. Delete\n");
    printf("3. Display\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &a);
    return a;
}

void pause() {
    system("pause"); // Windows only
}

int main() {
    char arr[5];
    int count = 0;
    int choice;
    char ch;

    do {
        choice = menu();
        switch (choice) {
            case 1: // Insert
                if (count < 5) {
                    printf("Enter character to insert: ");
                    scanf(" %c", &ch);
                    arr[count++] = ch;
                    printf("Inserted '%c'\n", ch);
                } else {
                    printf("Array is full.\n");
                }
                break;
            case 2: // Delete
                if (count > 0) {
                    printf("Deleted '%c'\n", arr[count - 1]);
                    count--;
                } else {
                    printf("Array is empty.\n");
                }
                break;
            case 3: // Display
                if (count == 0) {
                    printf("Array is empty.\n");
                } else {
                    printf("Array contents: ");
                    for (int i = 0; i < count; i++) {
                        printf("%c ", arr[i]);
                    }
                    printf("\n");
                }
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice.\n");
        }

        if (choice != 4)
            pause();

    } while (choice != 4);

    return 0;
}
