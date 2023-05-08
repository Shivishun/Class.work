#include <stdio.h>

int main() {
   int array[100], n, i;
   float sum = 0, average = 0;

   printf("Enter the number of elements in the array: ");
   scanf("%d", &n);

   printf("Enter %d elements: ", n);
   for (i = 0; i < n; i++) {
      scanf("%d", &array[i]);
      sum += array[i];
   }

   average = sum / n;

   printf("Sum of the array elements is: %.2f\n", sum);
   printf("Average of the array elements is: %.2f\n", average);

   return 0;
}
