package armstorg_no;

public class armstong {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int num=153;
		int c=num;
		int digit=0;
		int sum=0;
		while(c!=0)
		{
			digit++;
			c=c/10;
		}
		c=num;

		while(c!=0)
		{
			int l=c%10;
			int k = 1;
			for(int i=1;i<=digit;i++)
			{
				k=k*l;
			}
			sum=sum+k;
			c/=10;
		}
//		System.out.println(sum);
		if(sum==num)
		System.out.println("arm");
		else
			System.out.println("not arm");


	}

}
