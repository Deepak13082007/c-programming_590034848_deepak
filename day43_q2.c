// Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len, flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}
