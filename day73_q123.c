/* 
Write a C program to read a text file and count the total number of characters, words, and lines.
A word is a sequence of non-space characters separated by spaces or newlines.
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file = fopen("info.txt", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    int chars = 0, words = 0, lines = 0;
    char ch;
    int inWord = 0;

    while ((ch = fgetc(file)) != EOF) {
        chars++;

        if (ch == '\n')
            lines++;

        if (isspace(ch))
            inWord = 0;
        else if (!inWord) {
            words++;
            inWord = 1;
        }
    }

    // If file is not empty and doesn't end with newline, count the last line
    if (chars > 0 && ch != '\n')
        lines++;

    fclose(file);

    printf("Characters: %d\nWords: %d\nLines: %d\n", chars, words, lines);

    return 0;
}