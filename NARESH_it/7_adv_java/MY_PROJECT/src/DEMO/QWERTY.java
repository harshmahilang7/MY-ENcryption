package DEMO;

import java.sql.*;

public class QWERTY {
	public static void main(String[] args) throws ClassNotFoundException, SQLException 
	{
		Class.forName("oracle.jdbc.driver.OracleDriver");
		Connection conn=DriverManager.getConnection("jdbc:oracle:thin:@localhost:1521:xe","system","123");
		PreparedStatement ps=conn.prepareStatement("select * from movies");
		ResultSet set = ps.executeQuery();
		while (set.next()) 
		{
			System.out.println(set.getLong(1));
			System.out.println(set.getString(2));
		}
	}
}
