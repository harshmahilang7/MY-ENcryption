package q1;

import java.io.FileOutputStream;
import java.io.ObjectOutputStream;
import java.security.KeyStore.TrustedCertificateEntry;

public class RetrieveObject {


	var fop= new FileOutputStream("C:\\Users\\harsh\\OneDrive\\Desktop\\object\\student.txt");
	var oos = new ObjectOutputStream(fop);

	try(oos;fos)
	{
		 Student s =null;
    	 while((s=(Student)o.readObject())!=null) {
    		 System.out.println(s);
    	 }
	}
	catch(Exception e) {
    	System.out.println("End of file!");
     }


}
