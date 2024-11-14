/*

Que 1 :
=======

Write a java program to covert string to double using parseDouble() and multiply two Floating point Numbers and 
display the result by taking input from the command line argument.

=================================================*/
class p_1
{
	public static void main(String[] args) 
	{
		double x=Double.parseDouble(args[0]);
		double y=Double.parseDouble(args[1]);
		double result=x*y;
		System.out.println("the result is "+result);
		
	}
}
