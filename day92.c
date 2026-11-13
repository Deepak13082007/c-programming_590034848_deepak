// Q142: Store details of 5 students in an array of structures and print all.

/*
Sample Test Cases:
Input 1:
Details of 5 students (Name, Roll, Marks)
Output 1:
Tabular list of all 5 students with their details

*/

#include <stdio.h>

struct Student
{
    char name[50];
    int roll;
    float marks;
};

int main()
{
    struct Student s[5];
    int i;

    /* Taking input */
    for (i = 0; i < 5; i++)
    {
        printf("\nEnter details of Student %d:\n", i + 1);

        printf("Enter name: ");
        scanf("%49s", s[i].name);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    /* Displaying all students */
    printf("\nStudent Details:\n");
    printf("-----------------------------------------\n");
    printf("Name\t\tRoll\tMarks\n");
    printf("-----------------------------------------\n");

    for (i = 0; i < 5; i++)
    {
        printf("%-15s\t%d\t%.2f\n",
               s[i].name, s[i].roll, s[i].marks);
    }

    return 0;
}