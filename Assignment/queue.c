#include  <stdio.h>
char q[5];
int sizeOfQueue= 5;
int front=0;
int rear=0;




int menu () {
    int choice;
    printf("Menu:\n");
    printf("1. Insert \n");
    printf("2. Delete \n");
    printf("3. Display \n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d" , &choice);
    return choice;
}

void insert_Q() {
    char c;
    if (rear == sizeOfQueue) {
        printf("Queue is full\n");

    } else {
        printf("Enter character to insert: ");
        scanf(" %c" , &c);
        if (front == 0) {
            front = 1;
        }
        rear = rear + 1;
        q[rear] = c;
    }
}
void delete_Q() {
    if (front == rear) {
        front = 0;
        rear = 0;
    } else {
        front = front + 1;
    }
}

void display_Q() {
    int i;
    for (i = 0; i <= sizeOfQueue; i++) {
        printf("+----");
    }
    printf("+\n");

    for (i = 0; i <= sizeOfQueue; i++) {
        printf("|    ");
    }
    printf("|+\n");

    for (i = 0; i <= sizeOfQueue; i++) {
        printf("+----");
    }
    printf("+\n");
}

int main () {
    int choice;
    printf("\n\n  Implementation of Queue Operations  \n");

    do {
        choice = menu();
        switch (choice) {
            case 1: insert_Q();
                break;
            case 2: delete_Q();
                break;
            case 3: display_Q();
                break;
            case 4:
                printf("Exiting.....");
                break;
             default:
                printf("Invalid Choice.....");
        }
    } while (choice != 4);
}