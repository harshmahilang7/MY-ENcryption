package com.Strong;

public class Strong {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int num=15;

		int c=num;
		int sum=0;
		while(c!=0)
		{
			int rev=c%10;
			int k=1;

			for(int i=1;i<=rev;i++)
			{
				k=k*i;
//				System.out.println(i);
			}
			sum=sum+k;
			c/=10;
		}
		if (sum==num) {
			System.out.println("strong number");
		}
		else
		{
			System.out.println("not strong number");
		}



	}

}
