/* 
Write a C program to take two filenames from the user – a source file and a destination file.
Copy all content from the source file to the destination file using fgetc() and fputc().
*/

#include <stdio.h>

int main() {
    char source[100], destination[100];

    printf("Enter source filename: ");
    scanf("%s", source);

    printf("Enter destination filename: ");
    scanf("%s", destination);

    FILE *src = fopen(source, "r");
    if (src == NULL) {
        printf("Error: Could not open source file.\n");
        return 1;
    }

    FILE *dest = fopen(destination, "w");
    if (dest == NULL) {
        printf("Error: Could not open destination file.\n");
        fclose(src);
        return 1;
    }

    char ch;
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    fclose(src);
    fclose(dest);

    printf("\nContent copied successfully from %s to %s\n", source, destination);

    return 0;
}