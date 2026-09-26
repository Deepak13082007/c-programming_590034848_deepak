// Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int start = 0, i, j;
    char temp;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline
    str[strcspn(str, "\n")] = '\0';

    for (i = 0; ; i++) {
        // When space or end of string is found
        if (str[i] == ' ' || str[i] == '\0') {
            
            // Reverse the current word
            j = i - 1;
            while (start < j) {
                temp = str[start];
                str[start] = str[j];
                str[j] = temp;

                start++;
                j--;
            }

            // Move to the next word
            start = i + 1;
        }

        // End of string
        if (str[i] == '\0')
            break;
    }

    printf("Output: %s", str);

    return 0;
}
