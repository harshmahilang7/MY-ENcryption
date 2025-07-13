package day25_3_25;

import java.sql.Connection;
import java.sql.DatabaseMetaData;
import java.sql.DriverManager;
import java.sql.SQLException;

public class q1 
{
//	Write a JDBC program to find metadata about database using DatabaseMetaData 
//	interface.
//	metadata about database:Database product name,database product version,
//	driver name,maximum columns in a table.
	
	public static void main(String[] args) throws SQLException, ClassNotFoundException {
		Class.forName("oracle.jdbc.driver.OracleDriver");
		Connection conn= DriverManager.getConnection("jdbc:oracle:thin:@localhost:1521:xe","system","123");
		DatabaseMetaData metaData = conn.getMetaData();
		System.out.println(metaData.getDriverName());
		System.out.println(metaData.getDatabaseProductName());
		System.out.println(metaData.getDatabaseProductVersion());
		System.out.println(metaData.getMaxTableNameLength());
		System.out.println(metaData.getUserName());
		
	}
	

}
