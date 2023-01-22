import java.util.Scanner;

public class fourthtask {
    public static void main(String args[]){
        Scanner Calculator = new Scanner(System.in);
        int first, second, operation;
        System.out.println("Enter number");
        first = Calculator.nextInt();
        System.out.println("1 for addition, 2 for subtraction, 3 for multiplication, 4 for division");
        operation= Calculator.nextInt(); 
        System.out.println("Enter number");
        second = Calculator. nextInt();
        if (operation == 1){
            System.out.println(first + second);
        } else if (operation == 2 ){
            System.out.println(first - second);
        } else if (operation == 3){
            System.out.println(first * second);
        } else if (operation == 4){
            System.out.println(first / second);
        }
        Calculator.close();
    }
        
}    
    

