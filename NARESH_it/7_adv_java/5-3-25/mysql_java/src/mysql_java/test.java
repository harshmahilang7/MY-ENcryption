package mysql_java;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;

public class test
{
	public static void main(String[] args) throws SQLException
	{
		Connection con=DriverManager.getConnection("jdbc:mysql://localhost:3306/world","root","12345");
		Statement stm= con.createStatement();
		ResultSet rs = stm.executeQuery("select * from city");
		int k=0;
		while(rs.next())
		{
			if(rs.getString(3).equalsIgnoreCase("ind"))
			{
				if(rs.getString(2).equalsIgnoreCase("Gwalior"))
					System.out.println(rs.getString(2)+" "+rs.getInt(5));
			}
			k++;
		}
//		System.out.println("total "+k);


	}

}
