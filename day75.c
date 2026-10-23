// Q121: Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.

/*
Sample Test Cases:
Input 1:
Name: Rahul, Age: 23
Output 1:
File created successfully! Data written to info.txt

*/

#include <stdio.h>

int main()
{
    FILE *fp;
    char name[100];
    int age;

    // Open file in write mode
    fp = fopen("info.txt", "w");

    // Check if file was created successfully
    if(fp == NULL)
    {
        printf("Error creating file!\n");
        return 1;
    }

    // Take input from user
    printf("Enter your name: ");
    scanf(" %[^\n]", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    // Write data into file
    fprintf(fp, "Name: %s\n", name);
    fprintf(fp, "Age: %d\n", age);

    // Close the file
    fclose(fp);

    printf("File created successfully! Data written to info.txt\n");

    return 0;
}