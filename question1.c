#include <stdio.h>
int main()
{
        /*
         * Program:     A C program to calculate the total cost given the price, quantity purchased and tax rate
         * Author:      Ayodele Olufemi
         * Date:        09/23/2021
         */

        //First we declare and get the price of the item
        float price;
        printf("Enter the unit price of the item: ");
        scanf("%f", &price);

        //Next we declare and get the quantity of item purchased
        int quantity;
        printf("Enter the quantity of item purchased: ");
        scanf("%d", &quantity);

        //Next we declare and get the tax rate percent
        float tax;
        printf("Enter the tax rate percent: ");
        scanf("%f", &tax);

        //Now lets print out the given information
        printf("\nThe unit price is $%.2f, the quantity is %d and the tax rate is %.2f%%.", price, quantity, tax);

        //We declare and compute the total cost as follows: 
        float totalCost = price * quantity * (1 + (tax / 100));

        //Now we print the result

        printf("\nThe total cost is $%.2f.\n", totalCost);

        return 0;
}

