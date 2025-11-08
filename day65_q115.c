/* 
Write a program to take two strings s and t as input (all lowercase).
Determine if they are anagrams (same characters with same frequencies).
Print "Anagram" if true, otherwise "Not Anagram".
*/

#include <stdio.h>
#include <string.h>

int main() {
    char s[100], t[100];

    printf("Enter first string: ");
    fgets(s, sizeof(s), stdin);
    printf("Enter second string: ");
    fgets(t, sizeof(t), stdin);

    int lenS = 0, lenT = 0;
    while (s[lenS] != '\0' && s[lenS] != '\n') lenS++;
    while (t[lenT] != '\0' && t[lenT] != '\n') lenT++;

    if (lenS != lenT) {
        printf("\nNot Anagram\n");
        return 0;
    }

    int countS[26] = {0}, countT[26] = {0};

    for (int i = 0; i < lenS; i++) {
        countS[s[i] - 'a']++;
        countT[t[i] - 'a']++;
    }

    int anagram = 1;
    for (int i = 0; i < 26; i++) {
        if (countS[i] != countT[i]) {
            anagram = 0;
            break;
        }
    }

    if (anagram)
        printf("\nAnagram\n");
    else
        printf("\nNot Anagram\n");

    return 0;
}