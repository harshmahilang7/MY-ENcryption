package web;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;

public class DBConnection 
{
	
	public static Connection conn=null;
	
	static {
		try 
		{
			Class.forName(DBInfo.DRIVER);
			conn=DriverManager.getConnection(DBInfo.URL,DBInfo.USERNAME,DBInfo.PASSWORD);
			
		} catch (Exception e) {
			e.printStackTrace();
		}
	}
	private DBConnection() 
	{
		
	}

	public static Connection getConn() throws SQLException
	{
		conn=DriverManager.getConnection(DBInfo.URL,DBInfo.USERNAME,DBInfo.PASSWORD);
		return conn;
	}
	

}
