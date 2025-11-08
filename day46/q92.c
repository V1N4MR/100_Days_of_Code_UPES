/* 
Write a program to find the first repeating lowercase alphabet in a string.
*/

#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0};
    int found = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;
            if (freq[ch - 'a'] == 2) {
                printf("\nFirst repeating lowercase alphabet: %c\n", ch);
                found = 1;
                break;
            }
        }
    }

    if (!found)
        printf("\nNo repeating lowercase alphabet found.\n");

    return 0;
}