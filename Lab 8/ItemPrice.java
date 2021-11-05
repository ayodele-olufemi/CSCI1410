// Write a complete Java program that asks for the price of an item and the quantity purchased, and
// writes out the total cost.


import java.util.Scanner;

public class ItemPrice
{
  public static void main(String args[]) 
  {
    Scanner s = new Scanner(System.in);

    // Get user input for item price
	System.out.print("Enter item price: ");
	double price = s.nextDouble();

    // Get user input for item count
	System.out.print("Enter item count: ");
	int quantity = s.nextInt();

    // Calculate the total price
	double totalPrice = price * quantity;

    // Print out the total price to the user
	System.out.printf("The total price is $%.2f%n", totalPrice);

    System.exit(0);
  }
}
