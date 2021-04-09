package javalist;

import java.util.LinkedList;
import java.util.Scanner;

public class Solution {

	public static void main(String[] args) {
		Scanner in=new Scanner(System.in);
		LinkedList<Integer>list=new LinkedList<>();
		int n=in.nextInt();
		for(int i=0;i<n;i++) {
			list.add(in.nextInt());
		}
		n=in.nextInt();
		for(int i=0;i<n;i++) {
			if(in.next().equals("Insert"))
				list.add(in.nextInt(),in.nextInt());
			else
				list.remove(in.nextInt());
		}
		in.close();
	for(Integer i:list) {
		System.out.print(i+" ");
	}
 }
}
