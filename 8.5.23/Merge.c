#include <stdio.h>
int main() {
   int array1[50], array2[50], mergedArray[50], n1, n2, i, j;

   printf("Enter the number of elements in array1: ");
   scanf("%d", &n1);

   printf("Enter %d elements of array1: ", n1);
   for (i = 0; i < n1; i++) {
      scanf("%d", &array1[i]);
   }

   printf("Enter the number of elements in array2: ");
   scanf("%d", &n2);

   printf("Enter %d elements of array2: ", n2);
   for (i = 0; i < n2; i++) {
      scanf("%d", &array2[i]);
   }
   for (i = 0; i < n1; i++) {
      mergedArray[i] = array1[i];
   }

   for (i = 0, j = n1; i < n2; i++, j++) {
      mergedArray[j] = array2[i];
   }

   printf("\nMerged array: ");
   for (i = 0; i < n1 + n2; i++) {
      printf("%d ", mergedArray[i]);
   }

   return 0;
}
