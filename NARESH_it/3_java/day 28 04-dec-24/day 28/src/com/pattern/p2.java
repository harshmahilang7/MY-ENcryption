package com.pattern;

public class p2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		for (int j = 1; j <= 5; j++)
		{
			for (int i = 5; i >=j; i--)
			{
				System.out.print(" ");
			}
			for(int k=1;k<=j;k++)
			{
				System.out.print("x");
			}
			for(int q=2;q<=j;q++)
			{
				System.out.print("x");
			}


			System.out.println();
		}
	}

}
