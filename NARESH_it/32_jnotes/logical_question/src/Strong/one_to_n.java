package Strong;

public class one_to_n {
	public static void main(String[] args) 
	{
		int last=100;
		for(int i=1;i<=last;i++)
		{
		int n=i;
		int c=n;
		int sum=0;
		while(c!=0)
		{
			int rev=c%10;
			sum=sum+fact(rev);
			c/=10;
		}
		
		if(sum==n)
		{
			System.out.println("strong number  : "+n);
		}
		else
			System.out.println("not strong number  : "+n);
	}
	}
	public static int fact(int num)
	{
		int sum=1;
		for(int i=1;i<=num;i++)
		{
			sum*=i;
		}
		return sum;
		
		
	}
}
