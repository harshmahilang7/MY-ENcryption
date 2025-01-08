package magic_number;

//
//Magic
//1900                 =>                   	
//number= 1729
//The sum of the digits = 19
//The reverse of the digits = 91
//The product of 19 * 91 = 1729
//1729 is a Magic Number

public class one_to_n {

	public static void main(String[] args) {
		int n=1729;
		int copy=n;
		int sum=0;
		while(copy!=0)
		{
			int rev=copy%10;
			sum=sum+rev;
			copy/=10;
		}
		
		int revsum=0;
		int sc=sum;
		while(sc!=0)
		{
			int rev=sc%10;
			revsum=revsum*10+rev;
			sc/=10;
		}
		

		if(revsum*sum==n)
		{
			System.out.println("magic number : "+n);
		}
		else
			System.out.println("not a magic number : "+n);
		
		
	}

}
