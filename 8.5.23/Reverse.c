#include <stdio.h>
int main() {
   int array[100], reversedArray[100], n, i, j;

   printf("Enter the number of elements in the array: ");
   scanf("%d", &n);

   printf("Enter %d elements: ", n);
   for (i = 0; i < n; i++) {
      scanf("%d", &array[i]);
   }

   for (i = n - 1, j = 0; i >= 0; i--, j++) {
      reversedArray[j] = array[i];
   }

   printf("Original array: ");
   for (i = 0; i < n; i++) {
      printf("%d ", array[i]);
   }

   printf("\nReversed array: ");
   for (i = 0; i < n; i++) {
      printf("%d ", reversedArray[i]);
   }

   return 0;
}
