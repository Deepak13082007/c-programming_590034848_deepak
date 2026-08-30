//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/

#include <stdio.h>

int main() {
    int num, first, last, digits, power, middle, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Find the last digit
    last = num % 10;

    // Find the highest power of 10
    power = 1;
    digits = num;

    while (digits >= 10) {
        digits /= 10;
        power *= 10;
    }

    // Find the first digit
    first = digits;

    // Remove first and last digits
    middle = (num % power) / 10;

    // Swap first and last digits
    result = last * power + middle * 10 + first;

    printf("After swapping: %d\n", result);

    return 0;
}
