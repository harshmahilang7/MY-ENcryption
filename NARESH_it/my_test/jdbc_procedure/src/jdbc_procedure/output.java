package jdbc_procedure;

import java.sql.CallableStatement;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;
import java.sql.Types;

//SQL> create or replace procedure outputtest(jid number,jname out varchar2) as
//2  begin
//3  select name into jname from test1 where id=jid;
//4  end;
//5  /
//
//Procedure created.

public class output {
public static void main(String[] args) throws SQLException, ClassNotFoundException {
	Class.forName("oracle.jdbc.driver.OracleDriver");
	Connection conn=DriverManager.getConnection("jdbc:oracle:thin:@localhost:1521:xe","system","123");
	CallableStatement call = conn.prepareCall("{call outputtest(?,?)}");
	call.setInt(1,11);
	call.registerOutParameter(2, Types.VARCHAR);
	call.execute();
	String string = call.getString(2);
	System.out.println(string);
}
}
