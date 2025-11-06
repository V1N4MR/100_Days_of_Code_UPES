/*Write a program to print numbers from 1 to n.*/

#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("\nNumbers from 1 to %d:\n", n);

    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    printf("\n");

    return 0;
}