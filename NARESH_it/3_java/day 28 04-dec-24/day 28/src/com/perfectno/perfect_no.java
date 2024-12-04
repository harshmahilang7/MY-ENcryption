package com.perfectno;

public class perfect_no {
	public static void main(String[] args) {
		int num=496;
		int sum=0;
		for(int i=1;i<num;i++)
		{
			if(num%i==0)
			{
				sum=sum+i;
			}

		}

		if(num==sum)
		{
			System.out.println("perfect_number");

		}
		else
		{
			System.out.println("not perfect number");
		}
	}
}
