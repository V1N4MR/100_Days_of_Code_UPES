/* 
Write a program to replace spaces with hyphens in a string.
*/

#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ')
            str[i] = '-';
    }

    printf("\nString after replacing spaces with hyphens:\n%s\n", str);

    return 0;
}

