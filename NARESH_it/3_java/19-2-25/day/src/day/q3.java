package day;

import java.util.Arrays;

//Q3) WAP to print all the Prime Numbers from an Integer Array.
//
//Integer[] numbers = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
//
//Output : Prime Numbers: [2, 3, 5, 7, 11]
public class q3 {
	public static void main(String[] args)
	{
		Integer[] numbers = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

		Arrays.stream(numbers).filter(q3::primeNumber).forEach(num -> System.out.println(num));

	}
	public static boolean primeNumber(Integer num)
	{
		int flag=0;
		for(int i=1;i<=num;i++)
		{
			if(num%i==0)
			{
				flag+=1;
			}
		}

		if(flag==2)
		{
			return true;
		}
		else
			return false;
	}

}
