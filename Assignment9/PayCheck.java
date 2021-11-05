/*
Program: 	A Java program to compute employees paycheck
Author: 	Ayodele Olufemi
Date: 		11/03/2021
*/

import java.util.Scanner;

public class PayCheck {

    public static void main(String[] args) {

        // Creates a reader instance 
        Scanner s = new Scanner(System.in);

		// Requesting for number of employees
		System.out.print("Enter the number of employees: ");
		int numEmployees = s.nextInt();
        
		// Creating needed variables for use in loop
		int i = 1;
		double hourlyRate;
		double hoursWorked;
		double grossPay;
		double tax;
		double netPay;

		// Creating a loop to compute employee's paycheck
		while (i <= numEmployees) {
			// Printing header
			System.out.println("------------------------Employee #" + i + "------------------------");

			// Requesting for employee's hourly rate
			System.out.print("Enter the hourly rate: ");
			hourlyRate =  s.nextDouble();

			// Requesting for employee's hours worked
			System.out.print("Enter the hours worked: ");
			hoursWorked =  s.nextDouble();
			
			// Calculating gross pay
			grossPay = hourlyRate * hoursWorked;

			// Calculating tax
			if (grossPay <= 500) {
				tax = 0;
			} else if (grossPay <= 1100) {
				tax = grossPay * 0.02;
			} else if (grossPay <= 12000) {
				tax = grossPay * 0.05;
			} else {
				tax = grossPay * 0.07;
			}

			// Calculating net pay
			netPay = grossPay - tax;

			// Printing the results
			System.out.print(String.format("\nHourly Rate: $%.2f\nHours: %.2f hours\nPay: $%.2f\nTax: $%.2f\nNet Pay: $%.2f\n", hourlyRate, hoursWorked, grossPay, tax, netPay));
			
			// incrementing processed employee counter
			i++;
		}

    }
}


