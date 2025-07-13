package app;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;

public class DBconnection 
{
	static Connection con=null;
	private DBconnection() {}
	static 
	{
		try {
			Class.forName(DBinfo.DRIVER);
			con=DriverManager.getConnection(DBinfo.URL,DBinfo.USERNAME,DBinfo.PASSWORD);
		} 
		catch (ClassNotFoundException e) {
			
			e.printStackTrace();
		} 
		catch (SQLException e) {
			e.printStackTrace();
		}
	}
	public static Connection getConnection()
	{
		return con;
	}

}
