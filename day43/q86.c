/* 
Write a program to check if a string is a palindrome.
*/

#include <stdio.h>

int main() {
    char str[100];
    int i, j, palindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++);
    int len = i;

    for (i = 0, j = len - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            palindrome = 0;
            break;
        }
    }

    if (palindrome)
        printf("\nThe string is a palindrome.\n");
    else
        printf("\nThe string is not a palindrome.\n");

    return 0;
}

