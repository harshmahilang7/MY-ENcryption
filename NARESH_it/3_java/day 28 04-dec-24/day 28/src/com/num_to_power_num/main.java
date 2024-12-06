package com.num_to_power_num;

public class main {


	public static void main(String[] args) {
		// TODO Auto-generated method stub

		for(int i=1;i<=10;i++)
		{
			System.out.print(power(i)+"  ");

		}

	}

	private static int power(int i) {
		// TODO Auto-generated method stub
		int sum=1;
		for(int j=1;j<=i;j++)
		{
			sum*=i;
		}
		return sum;
	}

}
