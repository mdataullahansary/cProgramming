#include <stdio.h>
int arr[5];
const int sizeOfArray = 5;

void inputElement () {
    int i;
    for (i = 1; i <= sizeOfArray; i++) {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }
}
void main () {
    printf("\n\n    Linear Search\n Size of Array : 05  \n\n");
    inputElement();

    int n, found = 0;
    printf("Enter the number of elements you want to search:  ");
    scanf("%d", &n);
    for (int i = 1; i <= sizeOfArray; i++) {
        if (arr[i] == n) {
            printf(" '%d' found at index %d .\n", n, i);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("\n '%d' element not found", n);
    }
}