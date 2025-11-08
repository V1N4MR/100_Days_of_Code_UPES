/* 
Write a program to reverse each word in a sentence without changing the word order.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    int start = 0, i = 0;
    char temp;

    while (1) {
        if (sentence[i] == ' ' || sentence[i] == '\0' || sentence[i] == '\n') {
            int end = i - 1;
            while (start < end) {
                temp = sentence[start];
                sentence[start] = sentence[end];
                sentence[end] = temp;
                start++;
                end--;
            }
            if (sentence[i] == '\0' || sentence[i] == '\n')
                break;
            start = i + 1;
        }
        i++;
    }

    printf("\nSentence after reversing each word:\n%s\n", sentence);

    return 0;
}

