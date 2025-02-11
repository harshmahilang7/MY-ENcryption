package try_with_Resourses_Automatic_Closing_Facility;

public class DatabaseResourse implements AutoCloseable{

	@Override
	public void close() throws Exception {
		System.out.println("DatabaseResourse is closed");
		
	}

}
