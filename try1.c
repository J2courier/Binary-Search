#include <stdio.h>

int main() {
    int arr[2][3], temp, i, j;

    // Input 6 numbers
    printf("Enter 6 numbers:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Bubble sort
    for (i = 0; i < 2; i++) { //row
        for (j = 0; j < 2 ; j++) { //index
            for (int k = 0; k < 2 - j; k++) { //column
                if (arr[i][k] > arr[i][k + 1]) {
                    // Swap
                    temp = arr[i][k];
                    arr[i][k] = arr[i][k + 1];
                    arr[i][k + 1] = temp;
                }
            }
        }
    }
    //

    // Output the sorted array in 2x3 grid format
    printf("\nSorted array:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
