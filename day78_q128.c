/* 
Write a C program to read a text file and count the number of vowels and consonants.
Ignore digits and special characters.
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file = fopen("input.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open input.txt\n");
        return 1;
    }

    char ch;
    int vowels = 0, consonants = 0;

    while ((ch = fgetc(file)) != EOF) {
        if (isalpha(ch)) {
            ch = tolower(ch);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    fclose(file);

    printf("Vowels: %d\nConsonants: %d\n", vowels, consonants);
    return 0;
}