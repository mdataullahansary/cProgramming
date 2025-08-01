#include <stdio.h>
int arr[6]= {1, 3, 4,6,5,2};
int size = 6;

void display( ) {
    int i;
    for ( i = 0; i < size; i++) {
        printf("+-----");
    }
    printf("+\n");

    for ( i = 0; i < size; i++) {
            printf("|  %d  ", arr[i]);
    }
    printf("|\n");

    for ( i = 0; i <size; i++) {
        printf("+-----");
    }
    printf("+\n");
}

void bubbleSort() {
    int i,j, temp;

    for (i = 0; i < size-1; i++) {
          int swap = 0;
        for ( j = 0; j < size-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swap = 1;


            }
        }
        if (!swap) {
            break;
        }
    }


}

void main () {
    printf("Unsorted Array: \n");
    display( );
    bubbleSort();
    printf("Sorted Array: \n");
    display( );
}