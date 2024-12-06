package com.max;

public class max {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int num=1298;
		int max=0;
		while(num!=0)
		{
			int rev=num%10;
			if(rev>max)
			{
				max=rev;
			}
			num/=10;
		}
		System.out.println(max);

	}

}
