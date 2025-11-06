/*Write a program to find the 1’s complement of a binary number and print it.*/

#include <stdio.h>
#include <string.h>

int main() {
    char binary[65];

    printf("Enter a binary number: ");
    scanf("%s", binary);

    int length = strlen(binary);

    for (int i = 0; i < length; i++) {
        if (binary[i] == '0')
            binary[i] = '1';
        else if (binary[i] == '1')
            binary[i] = '0';
        else {
            printf("\nInvalid binary number.\n");
            return 0;
        }
    }

    printf("\n1's complement = %s\n", binary);

    return 0;
}