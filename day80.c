// Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

/*
Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

*/

#include <stdio.h>

int main()
{
    FILE *fp;
    char name[50];
    int roll, marks, n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    /* Open file for writing */
    fp = fopen("students.txt", "w");

    if (fp == NULL)
    {
        printf("Unable to open file.\n");
        return 1;
    }

    /* Taking student details and writing into file */
    for (i = 1; i <= n; i++)
    {
        printf("\nEnter details of Student %d:\n", i);

        printf("Enter name: ");
        scanf("%49s", name);

        printf("Enter roll number: ");
        scanf("%d", &roll);

        printf("Enter marks: ");
        scanf("%d", &marks);

        fprintf(fp, "%s %d %d\n", name, roll, marks);
    }

    fclose(fp);

    /* Open file for reading */
    fp = fopen("students.txt", "r");

    if (fp == NULL)
    {
        printf("Unable to open file.\n");
        return 1;
    }

    printf("\nStudent Records:\n");

    /* Reading and displaying records */
    while (fscanf(fp, "%49s %d %d", name, &roll, &marks) == 3)
    {
        printf("Name: %s | Roll: %d | Marks: %d\n",
               name, roll, marks);
    }

    fclose(fp);

    return 0;
}