package test;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.Scanner;

//Coding Problem 2: Querying a Database with JDBC
//Problem Title: Employee Data Retriever
//Description:
//Write a Java program that connects to a database using JDBC, executes a SQL query to retrieve data from an "employees" table, and displays the results. The program should use a prepared statement to prevent SQL injection and allow the user to filter employees by department.
//Requirements:
//1.	Assume a table named employees with columns: id (int), name (varchar), department (varchar), and salary (double).
//2.	Use a Type 4 JDBC driver.
//3.	Prompt the user to input a department name.
//4.	Use a PreparedStatement to query employees from the specified department.
//5.	Display the results in a formatted manner (e.g., ID, Name, Department, Salary).
//6.	Handle exceptions and close all resources (Connection, PreparedStatement, ResultSet).


//SQL> create table emp1(id number(10),name varchar2(20),dept varchar2(20),sal number(7,2));
//
//Table created.
//
//SQL>

public class QueryingaDatabasewithJDBC 
{
	public static void main(String[] args) throws SQLException, ClassNotFoundException 
	{
		Scanner sc= new Scanner(System.in);
		Class.forName("oracle.jdbc.driver.OracleDriver");
		Connection conn=DriverManager.getConnection("jdbc:oracle:thin:@localhost:1521:xe","system","123");
		PreparedStatement specified_department = conn.prepareStatement("select * from emp1 where dept=?");
		System.out.println("enter the dept number");
		String dept=sc.nextLine();
		specified_department.setString(1, dept);
		ResultSet eq = specified_department.executeQuery();
		System.out.println("ID,\tName,\tDepartment,\t Salary\t");
		
		while (eq.next()) {
			System.out.println(eq.getLong(1)+"\t"+eq.getString(2)+"\t"+eq.getString(3)+"\t"+eq.getDouble(4));
			
		}
		eq.close();
		conn.close();
		sc.close();
	}

}
