package test;

interface a {
	default void m1() 
	{
		System.out.println("hello a");
	}
}

interface b {
	default void m1() 
	{
		System.out.println("hello b");
	}
}

public class demo1 implements a, b 
{
	@Override
	public void m1() {
		// TODO Auto-generated method stub
		a.super.m1();
		b.super.m1();
	}
	
	
	public static void main(String[] args) 
	{
		
		a obj1 = new demo1();
		
		obj1.m1();

	}

	
}
