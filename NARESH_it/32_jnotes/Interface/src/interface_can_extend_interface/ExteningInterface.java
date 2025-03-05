package interface_can_extend_interface;

interface Alpha
{
	void m1();
//	default void run()
//	{
//		System.out.println("hello");
//	}
}

interface Beta extends Alpha
{
	void m2();
}

class Sub implements Beta
{
//	static interface newinterface  -> static interface 
//	{
//		void m2();
//	}
//	
//	class mini implements newinterface
//	{
//
//		@Override
//		public void m2() {
//			// TODO Auto-generated method stub
//			
//		}
//
//		
//		
//	}
	

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
		s1.m1();  
		s1.m2();
//		s1.run();

	}

}