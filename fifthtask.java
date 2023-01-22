import java.util.Scanner;


public class fifthtask {
    public static void main(String args[]){
        

        Scanner Makechange = new Scanner(System.in);
        System.out.println("Enter price");
        double price = Makechange.nextDouble() ;
        System.out.println("Enter what was paid");
        double paid = Makechange.nextDouble() ;
        double change = 100*(paid - price); 
        
        int dollars = Math.round((int)change/100);
        change=change%100;
        int quarters = Math.round((int)change/25);
        change=change%25;
        int dimes = Math.round((int)change/10);
        change=change%10;
        int nickels = Math.round((int)change/5);
        change=change%5;
        int pennies = Math.round((int)change/1);
    
        System.out.println("Dollars: " + dollars);
        System.out.println("Quarters: " + quarters);
        System.out.println("Dimes: " + dimes);
        System.out.println("Nickels: " + nickels);
        System.out.println("Pennies: " + pennies);
        Makechange.close();
    }

}