/* 
Write a program to take a string s as input.
Find the length of the longest substring without repeating characters and print it.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    int len = 0;
    while (s[len] != '\0' && s[len] != '\n') len++;

    int maxLen = 0;

    for (int i = 0; i < len; i++) {
        int visited[256] = {0};
        int currentLen = 0;

        for (int j = i; j < len; j++) {
            if (visited[(int)s[j]])
                break;
            visited[(int)s[j]] = 1;
            currentLen++;
        }

        if (currentLen > maxLen)
            maxLen = currentLen;
    }

    printf("\nLength of longest substring without repeating characters = %d\n", maxLen);

    return 0;
}