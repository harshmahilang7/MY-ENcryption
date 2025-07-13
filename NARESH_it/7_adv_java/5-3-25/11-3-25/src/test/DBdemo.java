package test;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.Scanner;

public class DBdemo {
//	SQL> create table student(rollno number(3) primary key,name varchar2(20),percentage number(5,2),fname varchar2(20),lname varchar2(20),email varchar2(50),phno number(12));

	public static void loginAfter(Connection conn) throws SQLException
	{
		Scanner sc= new Scanner(System.in);
		PreparedStatement ps1=conn.prepareStatement("select * from student where Percentage>60");
		PreparedStatement ps2=conn.prepareStatement("update student set email=?,phno=? where rollno=?");
		PreparedStatement ps3=conn.prepareStatement("Delete from student where Percentage>30 and Percentage<60 ");
		PreparedStatement ps4=conn.prepareStatement("select * from student where Percentage>80");


		System.out.println("1. Show Students whose Percentage > 60%. ");
		System.out.println("2. Update Mailld & Phfio based on RollNo");
		System.out.println("3. Delete Student whose Percentage between 30% to 60%.");
		System.out.println("4. Find how many student got more than 80%");
		int key=sc.nextInt();
		switch (key) {
		case 1:
			ResultSet eq1 = ps1.executeQuery();
			while (eq1.next())
			{
				System.out.println(eq1.getLong(1)+" "+eq1.getString(2)+" "+eq1.getDouble(3)+" "+eq1.getString(4)+" "+eq1.getString(5)+" "+eq1.getString(6)+" "+ eq1.getLong(7));
			}
			break;
		case 2:
			System.out.println("enter the rollno");
			long roll=sc.nextLong();
			System.out.println("enter the email");
			String email=sc.nextLine();
			email=sc.nextLine();
			System.out.println("enter the phno");
			long phno=sc.nextLong();

			ps2.setLong(3, roll);
			ps2.setString(1, email);
			ps2.setLong(2,phno);

			int eu = ps2.executeUpdate();
			if(eu>0)
			{
				System.out.println("updated");
			}
			else
			{
				System.out.println("invalid");
			}

			break;
		case 3:
			int eu3 = ps3.executeUpdate();
//			while (eq3.next())
//			{
//				System.out.println(eq3.getLong(1)+" "+eq3.getString(2)+" "+eq3.getDouble(3)+" "+eq3.getString(4)+" "+eq3.getString(5)+" "+eq3.getString(6)+" "+ eq3.getLong(7));
//			}
			if(eu3>0)
			{
				System.out.println("updated");
			}
			else
			{
				System.out.println("invalid");
			}

			break;
		case 4:
			ResultSet eq4 = ps4.executeQuery();
			while (eq4.next())
			{
				System.out.println(eq4.getLong(1)+" "+eq4.getString(2)+" "+eq4.getDouble(3)+" "+eq4.getString(4)+" "+eq4.getString(5)+" "+eq4.getString(6)+" "+ eq4.getLong(7));
			}
			break;
		default:
			System.out.println("Invalid process ");
			break;
		}


	}



	public static void main(String[] args) throws ClassNotFoundException, SQLException
	{
		try (Scanner sc = new Scanner(System.in)) {
			Class.forName("oracle.jdbc.driver.OracleDriver");
			Connection conn=DriverManager.getConnection("jdbc:oracle:thin:@localhost:1521:xe","system","123");
			PreparedStatement insert=conn.prepareStatement("insert into student values(?,?,?,?,?,?,?)");

			PreparedStatement login=conn.prepareStatement("select rollno,name from student");
			System.out.println("***************************");
			System.out.println("1.Register");
			System.out.println("2.Login");
			int ch=sc.nextInt();
			switch (ch) {
			case 1:
				System.out.println("enter the rollno");
				long rollno=sc.nextLong();
				System.out.println("enter the name");
				String name=sc.nextLine();
				name=sc.nextLine();
				System.out.println("enter the percentage");
				double  percentage=sc.nextDouble();
				System.out.println("enter the fname");
				String fname=sc.nextLine();
				fname=sc.nextLine();
				System.out.println("enter the lname");
				String lname=sc.nextLine();
				System.out.println("enter the email");
				String email=sc.nextLine();
				System.out.println("enter the phno");
				long phno=sc.nextLong();

				insert.setLong(1, rollno);
				insert.setString(2, name);
				insert.setDouble(3, percentage);
				insert.setString(4, fname);
				insert.setString(5, lname);
				insert.setString(6, email);
				insert.setLong(7, phno);

				int k=insert.executeUpdate();
				if(k>0)
				{
					System.out.println("Register sucessfull");
					loginAfter(conn);
				}
				else
				{
					System.out.println("Register failed");
				}
				break;
			case 2:
				System.out.println("enter the rollno");
				long lrollno=sc.nextLong();
				System.out.println("enter the name");
				String lname1=sc.nextLine();
				lname1=sc.nextLine();
				ResultSet executeQuery = login.executeQuery();
				while (executeQuery.next())
				{
					if(executeQuery.getLong(1)==lrollno && executeQuery.getString(2).equals(lname1))
					{
						System.out.println("login sucessfull");
						loginAfter(conn);
						break;
					}
					else
					{
						System.out.println(" rollno or name is Invalid ");
						break;
					}
				}


				break;
			default:
				System.out.println("Invalid process ");
				break;
			}
		}


	}


}
