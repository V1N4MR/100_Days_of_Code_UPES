/* 
Write a program to remove all vowels from a string.
*/

#include <stdio.h>

int main() {
    char str[100], result[100];
    int j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U' &&
            ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
            result[j++] = ch;
        }
    }

    result[j] = '\0';

    printf("\nString after removing vowels:\n%s\n", result);

    return 0;
}