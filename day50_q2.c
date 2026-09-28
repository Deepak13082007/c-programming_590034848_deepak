//Q100: Print all sub-strings of a string.

/*
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, k;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; i < strlen(str); i++) {
        for (j = i; j < strlen(str); j++) {
            for (k = i; k <= j; k++) {
                printf("%c", str[k]);
            }

            if (i != strlen(str) - 1 || j != strlen(str) - 1)
                printf(",");
        }
    }

    return 0;
}
