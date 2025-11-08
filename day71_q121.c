/* 
Write a C program that creates a text file named info.txt in write mode.
Take the user's name and age as input and write them to the file using fprintf().
Display a confirmation message after saving the data.
*/

#include <stdio.h>

int main() {
    char name[100];
    int age;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter your age: ");
    scanf("%d", &age);

    FILE *file = fopen("info.txt", "w");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    fprintf(file, "Name: %sAge: %d\n", name, age);
    fclose(file);

    printf("\nData successfully saved to info.txt\n");

    return 0;
}