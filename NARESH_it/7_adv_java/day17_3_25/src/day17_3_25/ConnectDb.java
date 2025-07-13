package day17_3_25;

import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.SQLException;
import java.util.Scanner;

import oracle.net.aso.f;
//SQL> desc stream4;
//Name                                      Null?    Type
//----------------------------------------- -------- -----------------
//ID                                                 NUMBER(10)
//NAME                                               VARCHAR2(20)
//RESUME                                             BLOB
//PHOTO                                              BLOB

public class ConnectDb {

	public static void main(String[] args) throws ClassNotFoundException, SQLException, FileNotFoundException 
	{
		Class.forName("oracle.jdbc.driver.OracleDriver");
		
		Connection conn= DriverManager.getConnection("jdbc:oracle:thin:@localhost:1521:xe","system","123");
		
		Scanner sc= new Scanner(System.in);
		
		
		PreparedStatement ps= 
				conn.prepareStatement("insert into stream4 values (?,?,?,?)");
		
		System.out.println("Enter the id");
		int id= sc.nextInt();
		System.out.println("Enter the name");
		String name = sc.nextLine();
		name = sc.nextLine();
		System.out.println("Enter the Resume link");
		String Resume = sc.nextLine();
		System.out.println("Enter the Photo link");
		String Photo = sc.nextLine();
		
		
		ps.setInt(1, id);
		ps.setString(2, name);
		
		File f1= new File(Resume);
		File f2= new File(Photo);
		if(f1.exists()&& f2.exists())
		{
			
//			resume set
			FileInputStream FR= new FileInputStream(Resume);
			ps.setBlob(3, FR,f1.length());
			
//			photo set 
			FileInputStream FP= new FileInputStream(Photo);
			ps.setBlob(4, FP,f2.length());
			
		}

		

		ps.executeUpdate();
		
		System.out.println("added values");
		
		

	}

}
