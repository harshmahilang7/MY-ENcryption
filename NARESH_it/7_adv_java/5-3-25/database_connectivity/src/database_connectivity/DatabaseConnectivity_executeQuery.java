package database_connectivity;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;

public class DatabaseConnectivity_executeQuery
{
	public static void main(String[] args)
	{
		try {

			Class.forName("oracle.jdbc.driver.OracleDriver");

			Connection conn= DriverManager.getConnection("jdbc:oracle:thin:@localhost:1521:xe", "system", "12345");

			Statement stm = conn.createStatement();

			ResultSet res = stm.executeQuery("select * from emp");

			while (res.next())
			{
				System.out.println(res.getString(2));
				System.out.println(res.getString("ename"));
			}

			res.close();
			stm.close();
			conn.close();



		} catch (ClassNotFoundException | SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}



	}

}
