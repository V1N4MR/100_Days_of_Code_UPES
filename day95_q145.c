/* Return a structure containing top student's details from a function. */

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

struct Student getTopStudent(struct Student s[], int n) {
    int i, max_index = 0;
    for (i = 1; i < n; i++) {
        if (s[i].marks > s[max_index].marks) {
            max_index = i;
        }
    }
    return s[max_index];
}

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

    struct Student top = getTopStudent(s, 5);

    printf("Top Student Details:\n");
    printf("Name: %s\n", top.name);
    printf("Roll No: %d\n", top.roll_no);
    printf("Marks: %.2f\n", top.marks);

    return 0;
}