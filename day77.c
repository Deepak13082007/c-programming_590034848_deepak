// Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

/*
Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING

*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *input, *output;
    int ch;

    // Open input file in read mode
    input = fopen("input.txt", "r");

    if(input == NULL)
    {
        printf("Error: input.txt does not exist!\n");
        return 1;
    }

    // Open output file in write mode
    output = fopen("output.txt", "w");

    if(output == NULL)
    {
        printf("Error: Unable to create output.txt!\n");
        fclose(input);
        return 1;
    }

    // Read, convert and write character by character
    while((ch = fgetc(input)) != EOF)
    {
        ch = toupper(ch);
        fputc(ch, output);
    }

    // Close both files
    fclose(input);
    fclose(output);

    printf("Text converted to uppercase successfully!\n");

    return 0;
}