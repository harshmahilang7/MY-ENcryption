package q2;

import java.sql.*;
import java.util.ArrayList;

public class DbConn {

//SQL> create table departments(id number(10), name varchar2(20),location varchar2(20),manager_id number(10));

//Table created.
//
//SQL>

//	Write a Java program to perform below operations:
//		Note:
//		-create table departments.
//		-Table's properties: id, name, location, and manager_id.
//		-Insert 5 records from sql command line.
//
//		Task to perform:Retrieves id, name, location, and manager_id from an Oracle database departments table.
//		Establishes a JDBC connection to Oracle.
//		Retrieves the department details from the departments table.
//		Converts the ResultSet into a list of Department objects.
//		1.Filters departments located in a specific city (e.g., "New York").
//		2.Sorts the departments by name in ascending order.
//		3.Limits the results to the top 3 departments based on manager_id.
//		4.Prints the list of top 3 departments with their details.
	public static void main(String[] args) throws SQLException, ClassNotFoundException {
		Class.forName("oracle.jdbc.driver.OracleDriver");
		Connection conn=DriverManager.getConnection("jdbc:oracle:thin:@localhost:1521:xe","system","123");
		PreparedStatement ps=conn.prepareStatement("select * from departments");
		ResultSet eq = ps.executeQuery();
		ArrayList<Department> dept=new ArrayList<Department>();
		while (eq.next())
		{
			dept.add(new Department(eq.getLong(1),eq.getString(2),eq.getString(3),eq.getLong(4)));
		}

//		1.Filters departments located in a specific city (e.g., "New York").
//		dept.stream().filter(d -> d.loc.equalsIgnoreCase("New York")).forEach(System.out::println);

//		2.Sorts the departments by name in ascending order.
//		dept.stream().sorted((d1,d2) -> d1.getName().compareTo(d2.getName())).forEach(System.out::println);
//		3.Limits the results to the top 3 departments based on manager_id.
		dept.stream().sorted((d1,d2) -> d1.getManager_id().compareTo(d2.getManager_id())).limit(3).forEach(System.out::println);
//		4.Prints the list of top 3 departments with their details.
		dept.stream().sorted((d1,d2) -> d1.getManager_id().compareTo(d2.getManager_id())).limit(3).forEach(System.out::println);

	}


}
