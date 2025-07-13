package database;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;

public class DBconnection
{
	private static Connection con=null;
	private DBconnection() {
		
	}
	
	static
	{
		
		try {
			Class.forName(DBinfo.DRIVER);
			con=DriverManager.getConnection(DBinfo.URL,DBinfo.USERNAME,DBinfo.PASSWORD);
		} 
		catch (SQLException e)
		{
		
			e.printStackTrace();
		} 
		catch (ClassNotFoundException e)
		{
			e.printStackTrace();
		}
	}
	public static Connection getCon() 
	{
		return con;
		
	}

}
