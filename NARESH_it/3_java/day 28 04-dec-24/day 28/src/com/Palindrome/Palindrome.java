package com.Palindrome;

public class Palindrome {

	public static void main(String[] args) {
		// TODO Auto-generated method stu

		int num=153;
		int c=num;
		int sum=0;
		while(c!=0)
		{
			int rev=c%10;
			sum=sum*10+rev;
			c/=10;
		}
		if(sum==num)
			System.out.println("palindrome");
		else
			System.out.println("non palindrome");


	}

}
