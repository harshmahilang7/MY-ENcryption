package test;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.Scanner;

//Practical
//1.Construct JDBC Application based on the following Specications(20 marks)
//DB Table : Product72(code,name,price,qty)
//Primary key : code
//
//SQL> create table Prodcct72(code number(5),name varchar2(10),price number(10),qty number(10));
//
//Table created.
//Construct JDBC Application to perform the following operations based on User Choice:
//1.AddProduct
//2.ViewAllProducts
//3.ViewProductByCode
//4.Exit

public class q2
{
	public static void main(String[] args)
	{
		Scanner sc= new Scanner(System.in);
		try(sc;)
		{
			Class.forName("oracle.jdbc.driver.OracleDriver");
			Connection conn=DriverManager.getConnection("jdbc:oracle:thin:@localhost:1521:xe","system","123");
//			Statement stm=conn.createStatement();
			PreparedStatement ps=conn.prepareStatement("insert into Prodcct72 values(?,?,?,?)");
			PreparedStatement ps2=conn.prepareStatement("select * from Prodcct72");
			PreparedStatement ps3=conn.prepareStatement("select * from Prodcct72 where code=?");
			PreparedStatement ps4=conn.prepareStatement("update Prodcct72 set price=? where code=?");
			PreparedStatement ps5=conn.prepareStatement("update Prodcct72 set qty=? where code=?");
			PreparedStatement ps6=conn.prepareStatement("delete from Prodcct72 where code=?");
			while(true)
			{
				System.out.println("1.AddProduct");
				System.out.println("2.ViewAllProducts ");
				System.out.println("3.ViewProductByCode");
//				System.out.println("4.UpdateProductByCode(price-qty)");
//				System.out.println("5.DeleteProductByCode");
				System.out.println("4.Exit");
				int ch=sc.nextInt();
				switch (ch)
				{
					case 1:
//						code number(5),name varchar2(10),price number(10),qty number(10)
						System.out.println("enter code");
						int code=sc.nextInt();
						System.out.println("enter name");
						String name=sc.nextLine();
						name=sc.nextLine();
						System.out.println("enter price");
						int price=sc.nextInt();
						System.out.println("enter qty");
						int qty=sc.nextInt();
						ps.setInt(1, code);
						ps.setString(2, name);
						ps.setInt(3, price);
						ps.setInt(4, qty);
						ps.executeUpdate();
						System.out.println("add succesfully");
						break;
					case 2:
						ResultSet executeQuery = ps2.executeQuery();
						while(executeQuery.next())
						{
							System.out.println(executeQuery.getInt(1)+" "+executeQuery.getString(2)+" "+executeQuery.getInt(3)+" "+executeQuery.getInt(4));
						}
						break;
					case 3:
						System.out.println("enter code");
						int code2=sc.nextInt();
						ps3.setInt(1, code2);
						ResultSet executeQuery1 = ps3.executeQuery();
						while(executeQuery1.next())
						{
							System.out.println(executeQuery1.getInt(1)+" "+executeQuery1.getString(2)+" "+executeQuery1.getInt(3)+" "+executeQuery1.getInt(4));
						}
						break;
//					case 4:
//						System.out.println("enter code");
//						int code3=sc.nextInt();
//						ps4.setInt(2, code3);
//						ps5.setInt(2, code3);
//						System.out.println("enter price");
//						int price2=sc.nextInt();
//						ps4.setInt(1, price2);
//						System.out.println("enter qty");
//						int qty2=sc.nextInt();
//						ps5.setInt(1, qty2);
//						ps4.executeQuery();
//						ps5.executeQuery();
//						System.out.println("UPDATED  Product");
////						while(executeQuery2.next())
////						{
////							System.out.println(executeQuery2.getInt(1)+" "+executeQuery2.getString(2)+" "+executeQuery2.getInt(3)+" "+executeQuery2.getInt(4));
////						}
//						break;
//					case 5:
//						System.out.println("enter code");
//						int code4=sc.nextInt();
//						ps6.setInt(1, code4);
//						ps6.executeQuery();
//						ResultSet executeQuery3 = ps2.executeQuery();
//						System.out.println("Deleted Product");
//						while(executeQuery3.next())
//						{
//							System.out.println(executeQuery3.getInt(1)+" "+executeQuery3.getString(2)+" "+executeQuery3.getInt(3)+" "+executeQuery3.getInt(4));
//						}
//						break;
					case 4:
						System.exit(0);
						break;
					default:
						System.out.println("invalid input");
						break;
				}

			}

		} catch (ClassNotFoundException | SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}




	}

}
