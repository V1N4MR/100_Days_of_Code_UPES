/* 
Write a C program to open an existing file in append mode.
Allow the user to enter a new line of text and append it at the end without overwriting existing content.
*/

#include <stdio.h>

int main() {
    char filename[100], text[200];

    printf("Enter filename to append: ");
    scanf("%s", filename);

    FILE *file = fopen(filename, "a");
    if (file == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    getchar(); // consume leftover newline
    printf("Enter the text to append: ");
    fgets(text, sizeof(text), stdin);

    fprintf(file, "%s", text);
    fclose(file);

    printf("\nText appended successfully to %s\n", filename);
    return 0;
}