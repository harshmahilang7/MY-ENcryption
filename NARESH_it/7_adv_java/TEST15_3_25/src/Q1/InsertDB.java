package Q1;
import java.util.*;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.SQLException;
import java.util.Scanner;

//SQL> CREATE TABLE Stream4(id NUMBER(10),name VARCHAR2(20),resume BLOB,photo BLOB);
//
//Table created.
public class InsertDB
{
	public static void main(String[] args) throws ClassNotFoundException, SQLException, FileNotFoundException 
	{
		Class.forName("oracle.jdbc.driver.OracleDriver");
		Scanner sc= new Scanner(System.in);
		Connection conn=DriverManager.getConnection("jdbc:oracle:thin:@localhost:1521:xe","system","123");
		PreparedStatement ps = conn.prepareStatement("insert into Stream4 values(?,?,?,?)");
		System.out.println("enter the id");
		int id=sc.nextInt();
		sc.nextLine();
		System.out.println("enter the name");
		String name= sc.nextLine();
		System.out.println("enter the resume");
		String locRec= sc.nextLine();
		System.out.println("enter the photo");
		String locPho= sc.nextLine();
		File f=new File(locRec);
		File f1=new File(locPho);
		FileInputStream fR=new FileInputStream(f);
		FileInputStream fP=new FileInputStream(f1);
		
		
		ps.setLong(1, id);
		ps.setString(2, name);
		
		
		ps.setBlob(3, fR,f.length());
		ps.setBlob(4, fP,f1.length());
		ps.executeUpdate();
		System.out.println("inserted");
	}

}
