package jdbc_procedure;
import java.sql.*;

//SQL> create or replace procedure inputtest(jid number,jname varchar2) as
//2  begin
//3  insert into test1 values(jid,jname);
//4  end;
//5  /
//
//Procedure created.

//SQL> create or replace procedure outputtest(jid number,jname out varchar2) as
//2  begin
//3  select name into jname from test1 where id=jid;
//4  end;
//5  /
//
//Procedure created.

public class conn 
{
	public static void main(String[] args) {
		try {
			Class.forName("oracle.jdbc.driver.OracleDriver");
			Connection conn= DriverManager.getConnection("jdbc:oracle:thin:@localhost:1521:xe","system","123");
			CallableStatement call = conn.prepareCall("{ call inputtest(?,?)}");
			call.setInt(1, 11);
			call.setString(2, "dastan");
			call.execute();
			System.out.println("done");
			
		} catch (ClassNotFoundException | SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
	}
	

}
