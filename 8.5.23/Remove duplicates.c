//Remove duplicates in an array:
#include <stdio.h>

int main() {
   int array[50], n, i, j, k;

   printf("Enter the number of elements in the array: ");
   scanf("%d", &n);

   printf("Enter %d elements: ", n);
   for (i = 0; i < n; i++) {
      scanf("%d", &array[i]);
   }
   for (i = 0; i < n; i++) {
      for (j = i + 1; j < n; j++) {
         if (array[i] == array[j]) {
            for (k = j; k < n - 1; k++) {
               array[k] = array[k + 1];
            }
            n--;
            j--;
         }
      }
   }

   printf("Array with duplicates removed: ");
   for (i = 0; i < n; i++) {
      printf("%d ", array[i]);
   }
   printf("\n");

   return 0;
}