package com.prime_no;

public class prime {

	public static void main(String[] args) {

		int num=1000000000;
		int c=0;
		for (int i = 2; i*i<=num; i++)
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
