/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
import java.util.Scanner;

public class Chapt9Ex3 {

    public static void main(String[] args) {

        // Creates a reader instance which takes
        // input from standard input - keyboard
        Scanner scanner= new Scanner(System.in);
        System.out.print("Enter an integer: ");

        // nextInt() reads the next integer from the keyboard
        int number = scanner.nextInt();

        // println() prints the following line to the output screen
        System.out.println("You entered: " + number);
    }
}
