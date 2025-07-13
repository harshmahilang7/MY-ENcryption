package Q1;

import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.PrintStream;
import java.sql.Blob;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.Scanner;

public class retrieveDB {

	public static void main(String[] args) throws ClassNotFoundException, SQLException, IOException 
	{
		Class.forName("oracle.jdbc.driver.OracleDriver");
		Scanner sc=new Scanner(System.in);
		Connection conn=DriverManager.getConnection("jdbc:oracle:thin:@localhost:1521:xe","system","123");
		PreparedStatement retrieve = conn.prepareStatement("Select * from Stream4");
		ResultSet data = retrieve.executeQuery();
		while (data.next()) {
			System.out.println(data.getLong(1));
			System.out.println(data.getString(2));
			System.out.println("enter the resume save path");
			String Rp=sc.nextLine();
			Blob blobR = data.getBlob(3);
			
			byte[] bytes = blobR.getBytes(1, (int)blobR.length());
			
			FileOutputStream fR= new FileOutputStream(Rp);
			fR.write(bytes);
			fR.close();
			
			
			System.out.println("enter the photo save path");
			String Pp=sc.nextLine();
			Blob blobP = data.getBlob(4);
			byte[] bytesP = blobP.getBytes(1, (int)blobR.length());
			FileOutputStream fP= new FileOutputStream(Pp);
			fP.write(bytesP);
			fP.close();

		}
	}

}
