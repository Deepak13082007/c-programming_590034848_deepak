// Q145: Return a structure containing top student's details from a function.

/*
Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96

*/

#include <stdio.h>

struct Student
{
    char name[50];
    int roll;
    int marks;
};

/* Function to find and return top student */
struct Student findTopper(struct Student s[], int n)
{
    int max = 0;

    for (int i = 1; i < n; i++)
    {
        if (s[i].marks > s[max].marks)
        {
            max = i;
        }
    }

    return s[max];
}

int main()
{
    struct Student s[100], topper;
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    /* Taking input */
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter details of Student %d:\n", i + 1);

        printf("Enter name: ");
        scanf("%49s", s[i].name);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll);

        printf("Enter marks: ");
        scanf("%d", &s[i].marks);
    }

    /* Function returns the top student's structure */
    topper = findTopper(s, n);

    printf("\nTop Student: %s | Roll: %d | Marks: %d\n",
           topper.name, topper.roll, topper.marks);

    return 0;
}