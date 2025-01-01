package ScopeOfStaticMethod;

//Program that describes interface static methods are available to interface name only.

interface Printable
{
	static void m1()
	{
		System.out.println("M1 static Method");
	}
}
public class ScopeOfStaticMethod implements Printable
{
	public static void main(String[] args) 
	{
		Printable.m1();
		//ScopeOfStaticMethod.m1();		
		//new ScopeOfStaticMethod().m1();
	}

}