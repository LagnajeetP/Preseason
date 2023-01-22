import java.util.Scanner;

public class sixthtask{

	public static void main(String[] args){

		int number = (int)(1 + Math.random() * 100);

		System.out.println("I'm thinking of a whole number betwen 1 and 100");
		System.out.println("type a number");

		Scanner scanner = new Scanner(System.in);

		int guesses = 0;
		boolean done = false;
		while(!done){

			int playerGuess = scanner.nextInt();
			guesses++;

			if(number < playerGuess){
				System.out.println("The number I'm thinking of is lower than " + playerGuess + ".");
				System.out.println("try again (Please type a whole number and press enter.)");
			}
			else if(number > playerGuess){
				System.out.println("The number I'm thinking of is greater than " + playerGuess + ".");
				System.out.println("try again (Please type a whole number and press enter.)");
			}
			else{
				System.out.println("That's correct I was thinking of a " + number + ".");
				System.out.println("It took you " + guesses + " guesses to get it right. Thanks for playing!");
				done = true;
			}
		}
		scanner.close();
	}
}

