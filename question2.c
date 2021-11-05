#include <math.h>
#include <stdio.h>

int main()
{
        /*
         * Program:     A C program to calculate the interest and final balance given the starting balance, 
         *              annual interest rate, and annual service charge.
         * Author:      Ayodele Olufemi
         * Date:        09/23/2021
         */

        //First we declare and get the starting balance
        float B;
        printf("Enter the starting account balance: ");
        scanf("%f", &B);

        //Next we declare and get the annual interest rate percent
        float I;
        printf("Enter the annual interest rate: ");
        scanf("%f", &I);

        //Next we declare and get the annual service charge
        float S;
        printf("Enter the annual service charge: ");
        scanf("%f", &S);

        //Now lets print out the given information
        printf("\nThe starting balance is $%.2f,\nThe annual interest rate is is %.2f%%, and\nThe annual service charge is  $%.2f.", B, I, S);

        //We declare and compute the grossBalance as follows: 
        float grossBalance = B * pow((1 + I/1200.0), 12.0);

        //We declare and compute the interest earned as follows:
        float interestEarned = grossBalance - B;

//We declare and compute the end balance as follows:
        float endBalance = grossBalance - S;

        //Now we print the result

        printf("\nThe total interest earned is $%.2f.\nThe end balance is $%.2f.\n", interestEarned, endBalance);

        return 0;
}

