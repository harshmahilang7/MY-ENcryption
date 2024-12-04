package com.prime_no;

public class prime {

	public static void main(String[] args) {

		int num=7;
		int c=0;
		for (int i = 2; i<=num-1; i++)
		{
			if(num%i==0)
			{
				c++;
			}

		}
		if(c==0)
		{
			System.out.println("prime no");
		}
		else

		System.out.println("non_prime no");

	}

}
