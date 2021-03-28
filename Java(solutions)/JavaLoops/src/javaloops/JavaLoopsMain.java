package javaloops;

import java.util.Scanner;

public class JavaLoopsMain {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        for (int i = 0; i < t; i++)
        {
	            int a = scan.nextInt();
	            int b = scan.nextInt();
	            int n = scan.nextInt();
	            
		            for (int j = 0; j < n; j++)
		            {
			                a += b * (int) Math.pow(2, j);
			                System.out.print(a + " ");
                    }
            System.out.println();
        }
        scan.close();

	}

}
