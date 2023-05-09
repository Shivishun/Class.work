#include <stdio.h>

int main() {
   int arr[100], n, i, max, min;

   printf("Enter the number of elements in the array: ");
   scanf("%d", &n);

   printf("Enter %d elements:\n", n);
   for (i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
   }

   max = arr[0];
   min = arr[0];

   for (i = 1; i < n; i++) {
      if (arr[i] > max) {
         max = arr[i];
      }
      if (arr[i] < min) {
         min = arr[i];
      }
   }

   printf("\nMaximum element in the array: %d", max);
   printf("\nMinimum element in the array: %d", min);

   return 0;
}
