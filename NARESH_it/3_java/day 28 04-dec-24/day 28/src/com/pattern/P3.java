package com.pattern;

public class P3 {

	public static void main(String[] args) {
//		for(int i=1;i<=6;i++)
//		{
//			for (int j = 1; j <10; j++)
//			{

//				for (int k = j; k < i; k++) {
//					System.out.print("c");
//
//				}
//
//			}
//			System.out.println();
//		}
		int c,d;
		c=1;
		d=9;
		for (int i = 5; i >=1; i--) {
			for (int j = 9; j >=1; j--) {
				if(j>=c&&j<=d)
				{
					System.out.print("*");
				}
				else
					System.out.print(" ");
			}
			c++;
			d--;
			System.out.println();
		}














	}
}