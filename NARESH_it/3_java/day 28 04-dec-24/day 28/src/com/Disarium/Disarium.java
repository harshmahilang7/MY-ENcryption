package com.Disarium;

public class Disarium {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
//		Disarium Number 89:> 8^1 + 9^2 = 89

		int num=89;
		int d=0;
		int c=num;
		int sum=0;
		while(c!=0)
		{
			d++;
			c/=10;
		}
		c=num;


		while(c!=0)
		{
			int rev=c%10;
			int k=1;
			for(int i=1;i<=d;i++)
			{
				k=k*rev;
			}
			d--;

			sum+=k;
			c/=10;
		}

		System.out.println(sum);

	}

}
