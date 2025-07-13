package day17_3_25;

import java.io.FileOutputStream;
import java.io.IOException;
import java.sql.Blob;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.Scanner;

public class reciver 
{
	public static void main(String[] args) throws ClassNotFoundException, SQLException, IOException 
	{
		Scanner sc= new Scanner(System.in);
		Class.forName("oracle.jdbc.driver.OracleDriver");
		Connection conn = DriverManager.getConnection("jdbc:oracle:thin:@localhost:1521:xe","system","123");
		PreparedStatement ps=
				conn.prepareStatement("select * from stream4 where id=?");
		
		System.out.println("enter the id");
		Long id= sc.nextLong();
		ps.setLong(1, id);
		
		ResultSet eq = ps.executeQuery();
		
		while (eq.next()) 
		{
			System.out.println(eq.getLong(1));
			System.out.println(eq.getString(2));
			
			System.out.println("enter the path resume");
			String resume= sc.nextLine();
			resume= sc.nextLine();
			
			
			System.out.println("enter the path resume");
			String photo= sc.nextLine();
			
			Blob bR = eq.getBlob(3);
			byte[] bRArrays = bR.getBytes(1, (int)bR.length());
			FileOutputStream fR= new FileOutputStream(resume);
			fR.write(bRArrays);
			fR.close();
			
			Blob bP = eq.getBlob(4);
			byte[] bPArray = bP.getBytes(1, (int) bP.length());
			FileOutputStream fP= new FileOutputStream(photo);
			fP.write(bPArray);
			fP.close();
			
			System.out.println("save done ✅");
		}
		
		
	}

}
