/* 
Write a program to count characters in a string without using built-in length functions.
*/

#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != '\n')
            count++;
    }

    printf("\nNumber of characters in the string = %d\n", count);

    return 0;
}

