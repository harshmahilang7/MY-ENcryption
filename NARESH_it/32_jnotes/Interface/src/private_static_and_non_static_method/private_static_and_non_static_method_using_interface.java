package private_static_and_non_static_method;

interface Moveable
{
	void move();  //JDK 1.0
	
	default void m1() //JDK 8V
	{	
		m3();
		m4();
	}
	
	static void m2() //JDK 8V
	{	
		m4();
	}
	
	private void m3() //JDK 9 [private non static method]
	{
		System.out.println("Private non static method of interface");
	}
	
	private static void m4() //JDK 9 [private static method]
	{	
		System.out.println("Private static method of interface");
	}	
}
class Move implements Moveable
{
	@Override
	public void move() 
	{
	 System.out.println("It is moving");		
	}	
}


public class private_static_and_non_static_method_using_interface
{
	public static void main(String[] args) 
	{
		Moveable m = new Move();
		m.move();
		m.m1();
		Moveable.m2();

	}

}