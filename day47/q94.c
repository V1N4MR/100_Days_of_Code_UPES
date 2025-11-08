/* 
Write a program to find the longest word in a sentence.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200], word[50];
    int maxLen = 0;
    char longest[50] = "";

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    int i = 0, j = 0;
    while (1) {
        if (sentence[i] != ' ' && sentence[i] != '\0' && sentence[i] != '\n') {
            word[j++] = sentence[i];
        } else {
            if (j != 0) {
                word[j] = '\0';
                if (j > maxLen) {
                    maxLen = j;
                    strcpy(longest, word);
                }
                j = 0;
            }
            if (sentence[i] == '\0' || sentence[i] == '\n')
                break;
        }
        i++;
    }

    printf("\nLongest word: %s\n", longest);

    return 0;
}