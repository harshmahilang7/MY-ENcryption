package loosecoupling;

public class Tea implements HotDrink 
{
	@Override
	public void prepare() 
	{
		System.out.println("Preparing Tea");
	}

}