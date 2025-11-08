/* 
Write a C program to ask the user for a filename.
Check if the file exists by opening it in read mode.
If the file pointer is NULL, print an error message.
Otherwise, read and display its content.
*/

#include <stdio.h>

int main() {
    char filename[100];
    printf("Enter filename: ");
    scanf("%s", filename);

    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: File does not exist or cannot be opened.\n");
        return 1;
    }

    char ch;
    printf("\nContents of %s:\n", filename);
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    fclose(file);
    return 0;
}