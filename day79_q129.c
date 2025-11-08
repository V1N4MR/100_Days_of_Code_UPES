/* 
Write a C program to read integers from numbers.txt (separated by spaces),
compute their sum and average, and print both.
*/

#include <stdio.h>

int main() {
    FILE *file = fopen("numbers.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open numbers.txt\n");
        return 1;
    }

    int num, sum = 0, count = 0;
    while (fscanf(file, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(file);

    if (count > 0) {
        double average = (double)sum / count;
        printf("Sum = %d\nAverage = %.2lf\n", sum, average);
    } else {
        printf("No integers found in the file.\n");
    }

    return 0;
}