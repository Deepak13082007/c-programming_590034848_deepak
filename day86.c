// Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

/*
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/

#include <stdio.h>
#include <string.h>

enum Menu
{
    ADD,
    SUBTRACT,
    MULTIPLY
};

int main()
{
    char input[20];
    int a, b;
    enum Menu choice;

    printf("Enter operation and two numbers: ");
    scanf("%19s %d %d", input, &a, &b);

    if (strcmp(input, "ADD") == 0)
        choice = ADD;
    else if (strcmp(input, "SUBTRACT") == 0)
        choice = SUBTRACT;
    else if (strcmp(input, "MULTIPLY") == 0)
        choice = MULTIPLY;
    else
    {
        printf("Invalid operation\n");
        return 1;
    }

    switch (choice)
    {
        case ADD:
            printf("%d\n", a + b);
            break;

        case SUBTRACT:
            printf("%d\n", a - b);
            break;

        case MULTIPLY:
            printf("%d\n", a * b);
            break;
    }

    return 0;
}