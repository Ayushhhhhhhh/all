import java.util.*;

public class pattern1{
    public static void main(String args[]) {
        Scanner Scan = new Scanner(System.in);
        int n = Scan.nextInt();
        System.out.println("Pattern 1. ");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                System.out.print("*");
            }
            System.out.println();
        }

        System.out.println("Pattern 2. ");

        for (int i = 0; i < n; i++) {
            for (int j = 0; j <= i; j++) {
                System.out.print("*");
            }
            System.out.println();
        }
        System.out.println("Pattern 3. ");

        for (int i = 0; i < n; i++) {
            for (int j = 1; j < n - i; j++) {
                System.out.print(" ");
            }
            for (int j = 0; j <= i; j++) {
                System.out.print("*");
            }
            System.out.println();
        }
        System.out.println("Pattern 4. ");

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i + 1; j++) {
                System.out.print("*");
            }
            for (int j = 0; j < 2 * n - 2 * (i + 1); j++) {
                System.out.print(" ");
            }
            for (int j = 0; j < i + 1; j++) {
                System.out.print("*");
            }
            System.out.println();

        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - i; j++) {
                System.out.print("*");
            }
            for (int j = 0; j < i * 2; j++) {
                System.out.print(" ");
            }
            for (int j = n - i; j > 0; j--) {
                System.out.print("*");
            }
            System.out.println();

        }
    }
}
