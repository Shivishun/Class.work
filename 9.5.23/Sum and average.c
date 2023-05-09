#include <stdio.h>

int main() {
   int arr[50], n, i, sum = 0;
   float avg;

   printf("Enter the number of elements in the array: ");
   scanf("%d", &n);

   printf("Enter %d elements:\n", n);
   for (i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
      sum += arr[i];
   }

   avg = (float) sum / n;

   printf("\nSum of array elements: %d", sum);
   printf("\nAverage of array elements: %.2f", avg);

   return 0;
}
