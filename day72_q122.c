/* 
Write a C program that opens an existing file (info.txt) and reads its contents using fgets().
Print all lines to the console until EOF is reached.
*/

#include <stdio.h>

int main() {
    char line[200];
    FILE *file = fopen("info.txt", "r");

    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Contents of info.txt:\n");
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    fclose(file);
    return 0;
}

