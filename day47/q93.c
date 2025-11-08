/* 
Write a program to check if two strings are anagrams of each other.
*/

#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int freq1[26] = {0}, freq2[26] = {0};
    int i, anagram = 1;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    for (i = 0; str1[i] != '\0' && str1[i] != '\n'; i++) {
        if (str1[i] >= 'a' && str1[i] <= 'z')
            freq1[str1[i] - 'a']++;
        else if (str1[i] >= 'A' && str1[i] <= 'Z')
            freq1[str1[i] - 'A']++;
    }

    for (i = 0; str2[i] != '\0' && str2[i] != '\n'; i++) {
        if (str2[i] >= 'a' && str2[i] <= 'z')
            freq2[str2[i] - 'a']++;
        else if (str2[i] >= 'A' && str2[i] <= 'Z')
            freq2[str2[i] - 'A']++;
    }

    for (i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            anagram = 0;
            break;
        }
    }

    if (anagram)
        printf("\nThe strings are anagrams.\n");
    else
        printf("\nThe strings are not anagrams.\n");

    return 0;
}

