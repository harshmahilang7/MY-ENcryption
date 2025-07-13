package database_connectivity;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;


public class RollBack_demo
{
	public static void main(String[] args) throws ClassNotFoundException, SQLException
	{
		Class.forName("oracle.jdbc.driver.OracleDriver");

		Connection conn = DriverManager.getConnection("jdbc:oracle:thin:@localhost:1521:xe","dastan","sudo");

		Statement stm = conn.createStatement();

		conn.setAutoCommit(false);

		int val = stm.executeUpdate("update emp set ename='harsh' where ename='JONES'");

		if(val>0)
		{
			System.out.println(val+" row updated ");

		}
		else
		{
			System.out.println("no row updated");
		}

//		res.close();
//		stm.close();
//		conn.close();


		conn.rollback();

		ResultSet res = stm.executeQuery("select * from emp");
		while (res.next())
		{
			System.out.println(res.getString("ename"));
		}



	}





	}


