package database_connectivity;

import java.sql.*;

public class ExecuteUpdate
{
	public static void main(String[] args) throws ClassNotFoundException, SQLException {

		Class.forName("oracle.jdbc.driver.OracleDriver");

		Connection conn = DriverManager.getConnection("jdbc:oracle:thin:@localhost:1521:xe","system","12345");

		Statement stm = conn.createStatement();

		int val = stm.executeUpdate("update emp set ename='harsh' where ename='john'");

		if(val>0)
		{
			System.out.println(val+" row updated ");

		}
		else
		{
			System.out.println("no row updated");
		}

//		res.close();
		stm.close();
		conn.close();


	}

}
