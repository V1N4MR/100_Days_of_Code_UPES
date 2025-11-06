/*Write a program to find profit or loss percentage given cost price and selling price.*/

#include <stdio.h>

int main() {
    float cost_price, selling_price, profit, loss, percentage;

    printf("Enter cost price: ");
    scanf("%f", &cost_price);

    printf("Enter selling price: ");
    scanf("%f", &selling_price);

    if (selling_price > cost_price) {
        profit = selling_price - cost_price;
        percentage = (profit / cost_price) * 100;

        printf("\nProfit = %.2f\n", profit);
        printf("Profit Percentage = %.2f%%\n", percentage);
    } 
    else if (cost_price > selling_price) {
        loss = cost_price - selling_price;
        percentage = (loss / cost_price) * 100;

        printf("\nLoss = %.2f\n", loss);
        printf("Loss Percentage = %.2f%%\n", percentage);
    } 
    else {
        printf("\nNo profit, no loss.\n");
    }

    return 0;
}

