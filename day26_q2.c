/*  Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*



/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/

#include <stdio.h>

int main() {
    int i, j;
    int stars[] = {1, 3, 5, 3, 1};

    for (i = 0; i < 5; i++) {
        for (j = 0; j < stars[i]; j++) {
            printf("*\n");
        }
        if (i < 4)
            printf("\n");
    }

    return 0;
}
