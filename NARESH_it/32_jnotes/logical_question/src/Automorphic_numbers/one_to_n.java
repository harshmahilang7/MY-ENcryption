package Automorphic_numbers;
//Automorphic numbers. // 5*5=25 // last digit is 5 // 6*6=36 // last digit is 6  // 25*25=625 // last digit is 25
public class one_to_n {
	public static void main(String[] args) 
	{
		int last=100;
		for(int i=0;i<=last;i++)
		{
		int n=i;
		int c=n;
		int div=1;
		while(c!=0)
		{
			div*=10;
			c/=10;
		}
		if((n*n)%div==n)
		{
			System.out.println("Automorphic numbers.  : "+n);
		}
		else 
			System.out.println("not Automorphic numbers.  : "+n);
		}

	}
}
