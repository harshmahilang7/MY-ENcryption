package loosecoupling;
public class Coffee implements HotDrink 
{
	@Override
	public void prepare() 
	{
		System.out.println("Preparing Coffee");

	}

}