import java.util.*;

public class array2D {
    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        int row = in.nextInt();
        int col = in.nextInt();
        int[][] arr = new int[row][col];
        for (int i = 0; i < row; i++) {
            System.out.println("Enter the row " + i);
            for (int j = 0; j < col; j++) {
                System.out.println("Enter the col " + j);

                arr[i][j] = in.nextInt();
            }
        }
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                System.out.print(arr[i][j] + "\t");
            }
            System.out.print("\n");

        }
    }
}
