// Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/

#include <stdio.h>

int main() {
    int rows, cols;
    int matrix[100][100];

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Diagonal traversal: ");

    // Traverse diagonals
    for (int d = 0; d < rows + cols - 1; d++) {
        int startRow = (d < cols) ? 0 : d - cols + 1;
        int startCol = (d < cols) ? d : cols - 1;

        while (startRow < rows && startCol >= 0) {
            printf("%d ", matrix[startRow][startCol]);
            startRow++;
            startCol--;
        }
    }

    return 0;
}
