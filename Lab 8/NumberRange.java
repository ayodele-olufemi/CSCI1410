// Write a complete Java program that asks the user for a positive integer "n", and then writes
// out all the numbers from 1 up to and including "n".

import java.util.Scanner;

public class NumberRange 
{
  public static void main(String args[]) 
  {
    Scanner s = new Scanner(System.in);

    // Get user input for a positive number
	System.out.print("Enter a positive number: ");
	int number = s.nextInt();

    //Check if number is positive
	if (number > 0){
	// Loop through to print numbers from 1 up to and including n
		for (int i=1; i <= number; i++) {
			System.out.println(i);
		}
	}

    System.exit(0);
  }
}
