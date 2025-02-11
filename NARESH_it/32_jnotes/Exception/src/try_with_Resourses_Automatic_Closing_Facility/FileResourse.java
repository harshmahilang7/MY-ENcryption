package try_with_Resourses_Automatic_Closing_Facility;

import java.io.Closeable;
import java.io.IOException;

public class FileResourse implements Closeable {

	@Override
	public void close() throws IOException {
		System.out.println("FileResourse is closed");
		
	}

	

}
