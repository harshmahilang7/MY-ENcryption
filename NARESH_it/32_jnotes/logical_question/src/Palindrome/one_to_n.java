package Palindrome;

public class one_to_n {
	public static void main(String[] args) {
		int last=100;
		for(int i=0;i<=last;i++)
		{
		int n = i;
		int c = n;
		int sum = 0;
		while (c != 0) {
			int rev = c % 10;
			sum = sum * 10 + rev;
			c /= 10;
		}
		if (sum == n) {
			System.out.println("it is Palindrome  : " + n);
		} else
			System.out.println("it is not Palindrome  : " + n);
	}
	}
}
