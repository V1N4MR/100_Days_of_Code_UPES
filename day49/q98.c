/* 
Write a program to print initials of a name with the surname displayed in full.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char name[100];

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    int len = strlen(name);
    if(name[len-1] == '\n')
        name[len-1] = '\0';

    printf("\nName with initials: ");

    for (int i = 0; name[i] != '\0'; i++) {
        if (i == 0)
            printf("%c. ", name[i]);
        else if (name[i] == ' ' && name[i+1] != '\0' && name[i+1] != '\n') {
            int j = i+1;
            int space_count = 0;
            while (name[j] != '\0') {
                if (name[j] == ' ')
                    space_count++;
                j++;
            }
            if (space_count == 0) {
                printf("%s", &name[i+1]);
                break;
            } else {
                printf("%c. ", name[i+1]);
            }
        }
    }

    printf("\n");

    return 0;
}

