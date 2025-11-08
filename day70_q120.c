/* 
Write a program to take a string as input and convert it to sentence case.
Sentence case means the first character is uppercase and the rest are lowercase.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[200];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int len = 0;
    while (str[len] != '\0' && str[len] != '\n') len++;

    if (len > 0 && isalpha(str[0]))
        str[0] = toupper(str[0]);

    for (int i = 1; i < len; i++)
        str[i] = tolower(str[i]);

    printf("\nString in sentence case: %s\n", str);

    return 0;
}