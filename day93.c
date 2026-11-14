// Q143: Find and print the student with the highest marks.

/*
Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)

*/

#include <stdio.h>

struct Student
{
    char name[50];
    int roll;
    int marks;
};

int main()
{
    struct Student s[100];
    int n, i, max;

    printf("Enter number of students: ");
    scanf("%d", &n);

    /* Taking student details */
    for (i = 0; i < n; i++)
    {
        printf("\nEnter details of Student %d:\n", i + 1);

        printf("Enter name: ");
        scanf("%49s", s[i].name);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll);

        printf("Enter marks: ");
        scanf("%d", &s[i].marks);
    }

    /* Assume first student has highest marks */
    max = 0;

    /* Find student with highest marks */
    for (i = 1; i < n; i++)
    {
        if (s[i].marks > s[max].marks)
        {
            max = i;
        }
    }

    printf("\nTopper: %s (Marks: %d)\n",
           s[max].name, s[max].marks);

    return 0;
}