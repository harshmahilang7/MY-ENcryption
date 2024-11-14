//2) Write a program to find out the area of Rectangle
//where length and  breadth of the Rectangle
//must be taken from user from command line argument..
class p_2 
{
	public static void main(String[] args) 
	{
		int l=Integer.parseInt(args[0]);
		int b=Integer.parseInt(args[1]);
		System.out.println("the area of rectangle="+(l*b));
	}
}
