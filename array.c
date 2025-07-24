#include <stdio.h>


int menu() {
    int choice;
    printf("\nMenu:\n");
    printf("1. Insert\n");
    printf("2. Delete\n");
    printf("3. Display\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    return choice;
}

void arrayBoxes(char arr[], int sizeOfArray, int indexOfArray) {
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
}

int insert(int indexOfArray, char arr[],int sizeOfArray) {
    char ch;
    if (indexOfArray < sizeOfArray) {
        printf("Enter character to insert: ");
        scanf(" %c", &ch);  // space before %c to consume leftover newline
        arr[indexOfArray] = ch;
        printf("Inserted '%c'\n", ch);
        return indexOfArray + 1;
    } else {
        printf("Array is full.\n");
        return indexOfArray;
    }
}

int deletation(int indexOfArray, char arr[]) {
    if (indexOfArray > 0) {
        printf("Deleted '%c'\n", arr[indexOfArray - 1]);
        return indexOfArray - 1;
    } else {
        printf("Array is empty.\n");
        return indexOfArray;
    }
}

int main() {
    int choice;
    char arr[5];
    int indexOfArray = 0;
    const int sizeOfArray = 5;

    do {
        choice = menu();
        switch (choice) {
            case 1:
                indexOfArray = insert(indexOfArray, arr, sizeOfArray);
                break;
            case 2:
                indexOfArray = deletation(indexOfArray, arr);
                break;
            case 3:
                arrayBoxes(arr, sizeOfArray, indexOfArray);
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 4);

    return 0;
}
