package try_with_Resourses_Automatic_Closing_Facility;

public class TryWithResourseDemo 
{
	public static void main(String[] args) throws Exception 
	{
		System.out.println("main-started");
		DatabaseResourse d1= new DatabaseResourse();
		FileResourse f1= new FileResourse();
		try(d1 ; f1)
		{
			System.out.println(10/0);
		}
		catch(Exception e)
		{
			System.err.println("Divide by zero problem");
		}
		System.out.println("main-ended");
	
	
	}
	
	

}
