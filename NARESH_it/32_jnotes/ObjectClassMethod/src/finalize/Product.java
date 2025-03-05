package finalize;

public record Product(Integer id,String name,Double bill) 
{
	@Override
	public void finalize()
	{
		System.out.println("i am finalize method");
	}

}
