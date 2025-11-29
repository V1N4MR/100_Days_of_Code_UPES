/* Find and print the student with the highest marks. */

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("Enter name for student %d: ", i + 1);
        scanf("%s", s[i].name);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll_no);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);

        printf("\n");
    }

    int max_index = 0;

    for (i = 1; i < 5; i++) {
        if (s[i].marks > s[max_index].marks) {
            max_index = i;
        }
    }

    printf("Student with Highest Marks:\n");
    printf("Name: %s\n", s[max_index].name);
    printf("Roll No: %d\n", s[max_index].roll_no);
    printf("Marks: %.2f\n", s[max_index].marks);

    return 0;
}