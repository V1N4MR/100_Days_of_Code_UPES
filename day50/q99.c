/* 
Write a program to change the date format from dd/04/yyyy to dd-Apr-yyyy.
*/

#include <stdio.h>

int main() {
    char date[20];
    int day, month, year;

    printf("Enter date in dd/mm/yyyy format: ");
    scanf("%d/%d/%d", &day, &month, &year);

    char *months[] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};

    if (month < 1 || month > 12) {
        printf("\nInvalid month.\n");
        return 1;
    }

    printf("\nDate in dd-MMM-yyyy format: %02d-%s-%d\n", day, months[month-1], year);

    return 0;
}