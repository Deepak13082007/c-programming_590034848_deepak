// Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

/*
Sample Test Cases:
Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 31
Words: 5
Lines: 2

*/

#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;
    int characters = 0;
    int words = 0;
    int lines = 0;
    int inWord = 0;

    // Open file in read mode
    fp = fopen("info.txt", "r");

    if(fp == NULL)
    {
        printf("File not found!\n");
        return 1;
    }

    // Read file character by character
    while((ch = fgetc(fp)) != EOF)
    {
        characters++;

        // Count lines
        if(ch == '\n')
        {
            lines++;
        }

        // Count words
        if(ch == ' ' || ch == '\n' || ch == '\t')
        {
            inWord = 0;
        }
        else if(inWord == 0)
        {
            words++;
            inWord = 1;
        }
    }

    // If file is not empty and last line has no '\n'
    if(characters > 0)
    {
        lines++;
    }

    fclose(fp);

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}