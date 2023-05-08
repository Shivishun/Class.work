//Maximum and minimum element in an array:
#include <stdio.h>

int main() {
   int array[50], n, i;
   int max = 0, min = 0;

   printf("Enter the number of elements in the array: ");
   scanf("%d", &n);

   printf("Enter %d elements: ", n);
   for (i = 0; i < n; i++) {
      scanf("%d", &array[i]);
   }
   max = array[0];
   min = array[0];
   for (i = 1; i < n; i++) {
      if (array[i] > max) {
         max = array[i];
      }
      if (array[i] < min) {
         min = array[i];
      }
   }

   printf("Maximum element in the array is: %d\n", max);
   printf("Minimum element in the array is: %d\n", min);

   return 0;
}
