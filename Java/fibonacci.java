
// Write a program to print Fibonacci series of n terms where n is input by user :
// 0 1 1 2 3 5 8 13 21 ..... 
// In the Fibonacci series, a number is the sum of the previous 2 numbers that came before it.
import java.util.*;

public class fibonacci {
    public static void main(String args[]) {
        Scanner Scan = new Scanner(System.in);
        int sum = 0;
        int prev1 = 0;
        int prev2 = 1;
        int n = Scan.nextInt();
        System.out.print(prev1 + " " + prev2 + " ");
        for (int i = 1; i < n; i++) {
            sum = prev1 + prev2;
            System.out.print(sum + " ");
            prev1 = prev2;
            prev2 = sum;
        }

    }
}
