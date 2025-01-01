package multiple_inheritance_using_default_method;

interface Alpha
{
	default void m1()
	{
		System.out.println("m1 method of Alpha interface ");
	}
}
interface Beta
{
	default void m1()
	{
		System.out.println("m1 method of Beta interface ");
	}
}
class Foo implements Alpha, Beta
{	
	@Override
	public void m1() 
	{
	  Alpha.super.m1();
	  Beta.super.m1();
      System.out.println("MI is possible using default method");	
	}	
}
public class MultipleInheritance {

	public static void main(String[] args) 
	{
		new Foo().m1();
	}

}