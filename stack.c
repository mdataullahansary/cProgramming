#include <stdio.h>
void display_stack() {
    printf("|  ");
    printf(" |");
    printf("\n");
    printf("+---+");
}

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

int insert(int top, char st[],int sizeOfStack) {
char c;
    if (top == sizeOfStack) {
        printf("Stack is full\n");
    } else {
        printf("Enter character to be inserted: ");
        scanf("%c" , &c);
        top = top + 1;
        st[top] = c;
    }
    return top;
}
int deletation () {

}


int main() {
int choice;
   const int sizeOfStack= 5;
    char st[sizeOfStack];
    int top = 0;
   do {
       choice = menu();
       switch (choice) {
           case 1:
               top=insert(top,st,sizeOfStack);
               break;
           case 2:
               top=deletation();
               break;
           case 3:
               display_stack();
               break;
           case 4:
               printf("Exiting...\n");
               break;
           default:
               printf("Invalid choice.\n");
               break;
       }
       } while (choice != 4);

       return 0;

   }