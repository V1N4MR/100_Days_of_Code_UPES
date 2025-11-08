/* 
Write a program to perform diagonal traversal of a matrix.
*/

#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];

    printf("\nEnter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nDiagonal traversal of the matrix:\n");

    for (int d = 0; d < rows + cols - 1; d++) {
        int r = (d < rows) ? d : rows - 1;
        int c = (d < rows) ? 0 : d - (rows - 1);

        while (r >= 0 && c < cols) {
            printf("%d ", matrix[r][c]);
            r--;
            c++;
        }
        printf("\n");
    }

    return 0;
}