#include <stdio.h>

int main() {
   int arr[50], reversed[50], n, i;

   printf("Enter the number of elements in the array: ");
   scanf("%d", &n);

   printf("Enter %d elements:\n", n);
   for (i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
   }

   printf("Original array: ");
   for (i = 0; i < n; i++) {
      printf("%d ", arr[i]);
   }

   for (i = 0; i < n; i++) {
      reversed[i] = arr[n - i - 1];
   }

   printf("\nReversed array: ");
   for (i = 0; i < n; i++) {
      printf("%d ", reversed[i]);
   }

   return 0;
}
