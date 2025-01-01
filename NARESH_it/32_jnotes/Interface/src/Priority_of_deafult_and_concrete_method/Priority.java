package Priority_of_deafult_and_concrete_method;

interface A
{
   default void m1()
   {
	   System.out.println("default method of interface A");
   }
}
class B 
{
	public void m1()
	{
		System.out.println("Concrete method of class B");
	}
}

class C extends B implements A 
{
	
}
//class C implements A extends B //invalid 
//{
//	
//}
public class Priority 
{
	public static void main(String[] args)
	{
		C c1 = new C();
		c1.m1();
	}

}