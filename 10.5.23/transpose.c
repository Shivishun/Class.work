#include <stdio.h>

int main() {
    int rows, cols, i, j;
    int a[100][100], trans[100][100];

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
            trans[j][i] = a[i][j];
        }
    }

    printf("Transpose of the matrix: \n");
    for (i = 0; i < cols; i++) {
        for (j = 0; j < rows; j++) {
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }

    return 0;
}
