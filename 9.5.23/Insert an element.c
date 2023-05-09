#include <stdio.h>

int main() {
   int arr[50], n, i, pos, elem;

   printf("Enter the number of elements in the array: ");
   scanf("%d", &n);

   printf("Enter %d elements:\n", n);
   for (i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
   }

   printf("Enter the position where you want to insert the element: ");
   scanf("%d", &pos);

   printf("Enter the element you want to insert: ");
   scanf("%d", &elem);

   for (i = n - 1; i >= pos - 1; i--) {
      arr[i + 1] = arr[i];
   }

   arr[pos - 1] = elem;

   printf("\nArray after insertion: ");
   for (i = 0; i <= n; i++) {
      printf("%d ", arr[i]);
   }

   return 0;
}
