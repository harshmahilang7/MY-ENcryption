//
//
//An enum defined inside a class can be private, static, default, public and protected, It can't be final and abstract.

enum Season   //not any modified allow 
              // by default public
{
	SPRING, SUMMER, WINTER, RAINY;
}

public class enumdemo4 
{
//	enum Season   //private, public, protected, static
//	{
//	SPRING, SUMMER, WINTER, RAINY;
//	}

	public static void main(String[] args) 
	{
		System.out.println(Season.RAINY);
	}
}


