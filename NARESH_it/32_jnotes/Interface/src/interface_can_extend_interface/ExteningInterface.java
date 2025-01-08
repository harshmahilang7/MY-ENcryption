package interface_can_extend_interface;

abstract interface Alpha
{
	void m1();
}

abstract interface Beta extends Alpha
{
	void m2();
}

class Sub implements Beta
{
	@Override
	public void m1() 
	{
		System.out.println("M1 method implemented");		
	}

	@Override
	public void m2() 
	{
		System.out.println("M2 method implemented");			
	}
	
}

public class ExteningInterface {

	public static void main(String[] args)
	{
		Sub s1 = new Sub();
		s1.m1();  s1.m2();

	}

}