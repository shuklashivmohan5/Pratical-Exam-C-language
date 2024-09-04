#include <stdio.h>

int main()
{
    FILE *fptr;
    char name[50], course[50];
    int i;

    fptr = fopen("data.txt", "w");
    if (fptr == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    for (i = 0; i < 3; i++)
    {
        printf("Enter name of student %d:- ", i + 1);
        fgets(name, sizeof(name), stdin);

        printf("Enter course of student %d:- ", i + 1);
        fgets(course, sizeof(course), stdin);

        fprintf(fptr, "Student %d: %sCourse: %s\n", i + 1, name, course);
    }

    fclose(fptr);

    printf("Data written to data.txt successfully.\n");

    return 0;
}
