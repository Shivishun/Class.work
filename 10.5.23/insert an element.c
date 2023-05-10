#include <stdio.h>

int main() {
    int arr[100], size, pos, element, i;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array: \n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position where you want to insert the element: ");
    scanf("%d", &pos);

    printf("Enter the element you want to insert: ");
    scanf("%d", &element);

    for (i = size - 1; i >= pos; i--) {
        arr[i + 1] = arr[i];
    }

    arr[pos] = element;

    size++;

    printf("The updated array is: \n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
