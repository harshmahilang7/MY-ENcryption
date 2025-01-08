package dibarium_number;
//Dibarium Number 89:> 8^1 + 9^2 = 89
public class one_to_n {
	public static void main(String[] args) {
		int last=100;
		for(int i=1;i<=last;i++)
		{
		int n = i;
		int c = n;
		int size = 0;
		int sum = 0;
		while (c != 0) {
			size++;
			c /= 10;
		}
		c = n;
		while (c != 0) {
			int rev = c % 10;
			sum = sum+ power1(rev, size);
			size--;
			c /= 10;
		}
		
		if(sum==n)
		{
			System.out.println("Dibarium Number : "+n);
			
		}
		else
			System.out.println("not Dibarium Number : "+n);
		
		}
	}

	public static int power1(int rev, int size)
	{
		int sum=1;
		for(int i=0;i<size;i++)
		{
			sum*=rev;
		}
		return sum;
	}

}
