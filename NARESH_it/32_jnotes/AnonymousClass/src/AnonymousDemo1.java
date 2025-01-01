//Program to implement Anonymous inner class by using Concrete class
class Super
{
	public void show()
	{
		System.out.println("Super class Show Method.");
	}

}

public class AnonymousDemo1 {

	public static void main(String[] args)
	{
		//Anonymous inner class(Without any Name)
		// extending the super class
		Super sub = new Super()
		{
			@Override
			public void show()
			{
				System.out.println("Sub class Show Method.");
			}		
			
		};
		
		sub.show();
		

	}

}