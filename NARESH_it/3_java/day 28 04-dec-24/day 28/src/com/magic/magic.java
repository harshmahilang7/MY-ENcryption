package com.magic;

public class magic {

	public static int find(int x)
	{
		int sum=0;
		while(x!=0)
		{
			int rev=x%10;
			sum+=rev;
			x/=10;
		}
		return sum;
	}

	public static void main(String[] args)
	{
		// TODO Auto-generated method stub

		int num=22;

		while(num>=10)
		{
			num=find(num);
		}
		System.out.println(num);



	}


}

