#include <stdio.h>

int main() {
    int rows1, cols1, rows2, cols2, i, j, k;
    int a[100][100], b[100][100], prod[100][100];

    printf("Enter the number of rows for the first matrix: ");
    scanf("%d", &rows1);

    printf("Enter the number of columns for the first matrix: ");
    scanf("%d", &cols1);

    printf("Enter the number of rows for the second matrix: ");
    scanf("%d", &rows2);

    printf("Enter the number of columns for the second matrix: ");
    scanf("%d", &cols2);

    if (cols1 != rows2) {
        printf("Matrices cannot be multiplied.\n");
        return 0;
    }

    printf("Enter the elements of first matrix: \n");
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the elements of second matrix: \n");
    for (i = 0; i < rows2; i++) {
        for (j = 0; j < cols2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols2; j++) {
            prod[i][j] = 0;
            for (k = 0; k < rows2; k++) {
                prod[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Product of two matrices: \n");
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols2; j++) {
            printf("%d ", prod[i][j]);
        }
        printf("\n");
    }

    return 0;
}
