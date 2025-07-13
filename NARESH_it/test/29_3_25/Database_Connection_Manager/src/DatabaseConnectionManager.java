import java.sql.*;
import java.util.Scanner;

//Coding Problem 1: Establishing a Database Connection Using JDBC
//
//Problem Title: Database Connection Manager
//Description:
//Write a Java program that establishes a connection to a database using the JDBC API. The program should allow the user to specify the database type (e.g., MySQL, PostgreSQL) and handle exceptions appropriately. Use a Type 4 JDBC driver (pure Java driver) for this task.
//Requirements:
//1.	Use the DriverManager class to establish a connection.
//2.	Prompt the user to input the database URL, username, and password.
//3.	Handle potential exceptions (e.g., SQLException, ClassNotFoundException).
//4.	Print a success message if the connection is established, or an error message if it fails.
//5.	Close the connection properly after use.


public class  DatabaseConnectionManager
{
	public static void main(String[] args) 
	{
		Scanner sc= new Scanner(System.in);
		System.out.println("enter the database URL");
		String databaseURL=sc.nextLine();
		System.out.println("enter the username");
		String username=sc.nextLine();
		System.out.println("enter the password");
		String password=sc.nextLine();
		try(sc;)
		{
			Class.forName("oracle.jdbc.driver.OracleDriver");
			Connection conn= DriverManager.getConnection(databaseURL,username,password);
			try(conn){
				System.out.println("connection is established");
			} 
			catch (Exception e) {
				e.printStackTrace();
			}

		} 
		catch (ClassNotFoundException e) 
		{
			System.out.println("connection is not established "+e.getMessage());
		} 
		catch (SQLException e)
		{
			System.out.println("connection is not established "+e.getMessage());
		}
		
	}

}
