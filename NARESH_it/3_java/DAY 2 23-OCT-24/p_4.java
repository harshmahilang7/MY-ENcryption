//Q4) Write a program to swap to numbers without using 3rd variable using 
//    command line argument.
class p_4 
{
	public static void main(String[] args) 
	{
		int a=Integer.parseInt(args[0]);
		int b=Integer.parseInt(args[1]);
		int temp=b;
		b=a;
		a=temp;
		System.out.println("a="+a);
		System.out.println("b="+b);
	}
}
