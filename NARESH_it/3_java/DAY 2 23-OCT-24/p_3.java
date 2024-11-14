//Q3) Write a program to find out the area of circle by taking the value
//    from Command line arguments
class p_3 
{
	public static void main(String[] args) 
	{
		int r=Integer.parseInt(args[0]);
		//      Integer.parseInt(args[0])
		final float PI=3.14f;
		System.out.println("the area of circle is"+PI*(r*r));
	}
}
