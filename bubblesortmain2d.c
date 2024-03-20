#include <stdio.h>

int main() {
   // Declare a 3x2 array to accommodate 6 elements, starting with index 1
   int arr[3 + 1][2 + 1];  // Size 4x3 to accommodate indices starting from 1

   // Input elements from the user
   for (int i = 1; i <= 3; i++) {  // Start loop from index 1
       for (int j = 1; j <= 2; j++) {
           printf("Enter element at [%d][%d]: ", i, j);
           scanf("%d", &arr[i][j]);
       }
   }

   // Print the array by row
   printf("\nArray:\n");
   for (int i = 1; i <= 3; i++) {
       for (int j = 1; j <= 2; j++) {
           printf("%d ", arr[i][j]);
       }
       printf("\n");
   }

   return 0;
}
