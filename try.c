#include <stdio.h>

int main() {
    int numbers[2][3], i , j, k;
    char ans;
    // Input 6 numbers
    printf("Enter 6 numbers:\n");
    for ( i = 0; i < 2; i++) {
        for ( j = 0; j < 3; j++) {
            scanf("%d", &numbers[i][j]);
        }
    }

    // Bubble sort algorithm for 2D array
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3 - 1; j++) {
            for (k = 0; k < 3 - j - 1; k++) {
                if (numbers[i][k] > numbers[i][k + 1]) {
                    // Swap the elements
                    int temp = numbers[i][k];
                    numbers[i][k] = numbers[i][k + 1];
                    numbers[i][k + 1] = temp;
                }
            }
        }
    }

    // Output the sorted array
    printf("Sorted array:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }
    return 0;
}
