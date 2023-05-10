#include <stdio.h>

int main() {
    int rows, cols, i, j;
    int a[100][100], sum = 0;

    printf("Enter the number of rows for the matrix: ");
    scanf("%d", &rows);

    printf("Enter the number of columns for the matrix: ");
    scanf("%d", &cols);

    printf("Enter the elements of the matrix: \n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (i == j) {
                sum += a[i][j];
            }
        }
    }

    printf("The sum of the diagonal elements is: %d\n", sum);

    return 0;
}
