package Perfect;

public class one_to_n {

	public static void main(String[] args) 
	{
		int last=100;
		for(int k=0;k<=last;k++)
		{
		int n=k;
		int sum=0;
		for(int i=1;i<n;i++)
		{
			if(n%i==0)
			{
				sum+=i;
			}
		}
		
		if(sum==n)
		{
			System.out.println("Perfect : "+n);
		}
		else
		{
			System.out.println("NonPerfect : "+n);	
		}
		}
	}

}
