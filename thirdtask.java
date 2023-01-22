public class thirdtask {
    static long factorial(long n)
    {
        if (n == 0)
            return 1;
 
        return n * factorial(n - 1);
    }
    public static void main(String[] args) {
        long num = 60;
        System.out.println("Factorial of " + num
                           + " is " + factorial(num));
        
    }
}
