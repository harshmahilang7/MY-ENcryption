package Multiple_Inheritance_by_using_adstract_method_interface1_7;

//Here interface A m1() is Override
//Because it is in front  =>  class Implementer implements A,B

interface A
{
	void m1();
}

interface B
{
	void m1();
}

class Implementer implements A,B
{
	@Override
	public void m1() 
	{
		System.out.println("Multiple Inheritance is Possible");		
	}
	
}

public class MultipleInheritance {

	public static void main(String[] args) 
	{
		new Implementer().m1();
	}

}


