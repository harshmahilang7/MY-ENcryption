package test_q2;

public class PalindromeChecker {
	int num;
	boolean isPal=false;

	public PalindromeChecker(int num) {
		super();
		this.num = num;
	}
	
	boolean isPalindrome()
	{
		int c=num;
		int rev=0;
		while(c!=0)
		{
			rev=rev*10+c%10;
			c/=10;
		}
//		System.out.println(rev);
		if(rev==num)
		{
			isPal=true;
			return true;
		}
		else
		{
			
			return false;
			
		}
	}

	@Override
	public String toString() {
		return "PalindromeChecker [num=" + num + ", isPal=" + isPal + "]";
	}
	
}
