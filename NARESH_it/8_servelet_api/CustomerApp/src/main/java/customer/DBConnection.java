package customer;

import java.sql.*;

public class DBConnection 
{
	private static Connection conn=null;
	private DBConnection() 
	{
		
	}
	static 
	{
		try
		{
			Class.forName(DBInfo.DRIVER);
			conn=DriverManager.getConnection(DBInfo.URL,DBInfo.USERNAME,DBInfo.PASSWORD);		
		}
		catch(Exception e){
			e.printStackTrace();
		}
	}
	public static Connection getConn()
	{
		return conn;
	}

}
