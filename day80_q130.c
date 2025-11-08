/* 
Write a C program to store multiple student records (name, roll number, marks) into a file using fprintf().
Then read the records using fscanf() and display each record.
*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    char name[50];
    int roll;
    float marks;

    FILE *file = fopen("students.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("\nEnter name: ");
        scanf("%s", name);
        printf("Enter roll number: ");
        scanf("%d", &roll);
        printf("Enter marks: ");
        scanf("%f", &marks);

        fprintf(file, "%s %d %.2f\n", name, roll, marks);
    }

    fclose(file);

    printf("\nReading student records from file:\n");
    file = fopen("students.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    while (fscanf(file, "%s %d %f", name, &roll, &marks) == 3) {
        printf("Name: %s, Roll No: %d, Marks: %.2f\n", name, roll, marks);
    }

    fclose(file);
    return 0;

}