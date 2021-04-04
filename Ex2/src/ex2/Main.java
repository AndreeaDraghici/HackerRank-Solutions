package ex2;
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.Scanner;
import java.util.*;
import java.io.*;

public class Main {

	public static void main(String[] args) throws IOException {
	
		
		
		int n;
		FileInputStream f=new FileInputStream("date1.in");
		InputStreamReader fchar=new InputStreamReader(f);
		BufferedReader buf=new BufferedReader(fchar);
		n=Integer.parseInt(buf.readLine());
		FileOutputStream g=new FileOutputStream("date1.out");
		PrintStream gchar=new PrintStream(g);
		gchar.println(n*n);
		gchar.println(n*n*n);
		
		
		
	}

}
