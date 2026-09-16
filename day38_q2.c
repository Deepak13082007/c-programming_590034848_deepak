// Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/
#include <stdio.h>

int main() {
    int n, m;
    int a[100][100];
    int symmetric = 1;

    // Enter rows and columns
    printf("Enter rows and columns: ");
    scanf("%d %d", &n, &m);

    // Enter matrix elements
    printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Check if matrix is square
    if (n != m) {
        symmetric = 0;
    } else {
        // Check symmetry
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (a[i][j] != a[j][i]) {
                    symmetric = 0;
                    break;
                }
            }

            if (symmetric == 0)
                break;
        }
    }

    // Display result
    if (symmetric == 1)
        printf("True");
    else
        printf("False");

    return 0;
}
