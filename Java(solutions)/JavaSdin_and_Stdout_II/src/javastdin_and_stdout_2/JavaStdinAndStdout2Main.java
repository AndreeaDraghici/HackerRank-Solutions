package javastdin_and_stdout_2;

import java.util.Scanner;

public class JavaStdinAndStdout2Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		 // Write your code here.
        Scanner obj=new Scanner(System.in);
        int i=obj.nextInt();
        double d=obj.nextDouble();
        obj.nextLine();  
        String s=obj.nextLine();  
        obj.close();
        
        System.out.println("String: " + s);
        System.out.println("Double: " + d);
        System.out.println("Int: " + i);

	}

}
