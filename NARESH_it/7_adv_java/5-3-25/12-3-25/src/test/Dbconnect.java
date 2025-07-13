package test;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.Scanner;

//
//==========
//Program1:Write a jdbc program as follows:
//Note:Create a table:-Product (U can create table from database).
//              Table Columns:-productId,productName,productPrice,productQty.
//Give Option to the user:
//          1.Insert productdetails into product table.
//          2.Retrieve productdetails in forward direction.
//          3.Retrieve productdetails in reverse direction.
//          4.Retrieve 3rd record from top.
//          5.Retrieve 3rd record from bottom.
//          6.Retrieve last three record from product table.

//SQL> create table Product(productId number(10),productName varchar2(30),productPrice number (7,2),productQty number(10));
//
//Table created.
//
//SQL>
public class Dbconnect
{
	public static void main(String[] args) throws ClassNotFoundException, SQLException
	{
		System.out.println("---------------------------------");
		Scanner sc=new Scanner(System.in);
		Class.forName("oracle.jdbc.driver.OracleDriver");
		Connection conn= DriverManager.getConnection("jdbc:oracle:thin:@localhost:1521:xe","system","123");

		PreparedStatement displayAll=conn.prepareStatement("select * from Product",ResultSet.TYPE_SCROLL_INSENSITIVE,ResultSet.CONCUR_READ_ONLY);

		while (true)
		{
		System.out.println("1.Insert productdetails into product table.\r\n"
				+ "2.Retrieve productdetails in forward direction.\r\n"
				+ "3.Retrieve productdetails in reverse direction.\r\n"
				+ "4.Retrieve 3rd record from top.\r\n"
				+ "5.Retrieve 3rd record from bottom.\r\n"
				+ "6.Retrieve last three record from product table.");

		System.out.println("7.exit");
		int ch=sc.nextInt();
			switch (ch) {
			case 1:
				insertinProduct(conn,sc);
				break;
			case 2:
				forwardDirection(conn,displayAll);
				break;
			case 3:
				backDirection(conn, displayAll);
				break;
			case 4:
				third_rd_record_from_top(conn, displayAll);
				break;
			case 5:
				third_rd_record_from_back(conn, displayAll);
				break;
			case 6:
				third_rd_record_last_from_back(conn, displayAll);
				break;
			case 7:
				System.out.println("exiting.............");
				System.exit(0);
				break;
			default:
				System.out.println("invalid choice");
				break;
			}
		}

	}

	public static void insertinProduct(Connection conn,Scanner sc) throws SQLException
	{
//		productId number(10),productName varchar2(30),productPrice number (7,2),productQty number(10)
		PreparedStatement insert=conn.prepareStatement("insert into Product values(?,?,?,?)");
		System.out.println("enter the productId");
		long productId=sc.nextLong();
		System.out.println("enter the productName");
		String productName=sc.nextLine();
		productName=sc.nextLine();
		System.out.println("enter the productPrice");
		double productPrice=sc.nextDouble();
		System.out.println("enter the productQty");
		long productQty=sc.nextLong();

		insert.setLong(1, productId);
		insert.setString(2, productName);
		insert.setDouble(3, productPrice);
		insert.setLong(4, productQty);

		int executeUpdate = insert.executeUpdate();
		if (executeUpdate>0)
		{
			System.out.println("inserted values in Product");
		}
		else
		{
			System.out.println("not inserted values in Product");
		}


	}

	public static void forwardDirection(Connection conn,PreparedStatement displayAll) throws SQLException
	{
		ResultSet fd = displayAll.executeQuery();
		printdataWithWhile(fd);
	}

	public static void printdataWithWhile(ResultSet data) throws SQLException
	{
		while (data.next())
		{
			System.out.println(data.getLong(1)+" "+data.getString(2)+" "+data.getDouble(3)+" "+data.getLong(4));
		}
	}

	public static void printdataWithoutWhile(ResultSet data) throws SQLException
	{
		System.out.println(data.getLong(1)+" "+data.getString(2)+" "+data.getDouble(3)+" "+data.getLong(4));
	}

	public static void backDirection(Connection conn,PreparedStatement displayAll) throws SQLException
	{
		ResultSet fd = displayAll.executeQuery();
		fd.afterLast();
		while (fd.previous())
		{
			System.out.println(fd.getLong(1)+" "+fd.getString(2)+" "+fd.getDouble(3)+" "+fd.getLong(4));
		}
	}

	public static void third_rd_record_from_top(Connection conn,PreparedStatement displayAll) throws SQLException
	{
		ResultSet thirdData = displayAll.executeQuery();
		thirdData.absolute(3);
		printdataWithoutWhile(thirdData);

	}

	public static void third_rd_record_from_back(Connection conn,PreparedStatement displayAll) throws SQLException
	{
		ResultSet thirdData = displayAll.executeQuery();
		thirdData.last();
		thirdData.relative(-3);
		printdataWithoutWhile(thirdData);

	}

	public static void third_rd_record_last_from_back(Connection conn,PreparedStatement displayAll) throws SQLException
	{
		ResultSet thirdData = displayAll.executeQuery();
		thirdData.last();
		thirdData.relative(-3);
		printdataWithWhile(thirdData);

	}
}
