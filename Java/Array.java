import java.util.*;

public class Array {
    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        int[] arr = new int[10];
        int n = in.nextInt();
        for (int i = 0; i < n; i++) {
            arr[i] = in.nextInt();
        }
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + "\n");
        }
    }

}
