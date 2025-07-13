package test;
import java.sql.*;
import java.util.*;


//SQL> create table student5(id number(10),name varchar(20),age number(3),gender char(1));
//
//Table created.
//
//SQL>

public class PreparedStatementDemo1 {
	public static void main(String[] args) throws ClassNotFoundException, SQLException
	{
		Class.forName("oracle.jdbc.driver.OracleDriver");
		Connection conn= DriverManager.getConnection("jdbc:oracle:thin:@localhost:1521:xe","dastan","sudo");
//	    Statement stm=conn.createStatement();
//	    ResultSet rs=stm.executeQuery("")
		PreparedStatement ps= conn.prepareStatement("insert into student5 values(?,?,?,?)");
		PreparedStatement ps2=conn.prepareStatement("select * from student5");
		try (Scanner sc = new Scanner(System.in)) {
			while(true)
			{
				System.out.println("1. for insert value");
				System.out.println("2. for view table ");
				System.out.println("3. for exit ");
				int choice=sc.nextInt();
				switch(choice)
				{
				case 1:

					System.out.println("enter the id");
					int id=sc.nextInt();
					System.out.println("enter the name");
					String name= sc.nextLine();
					name= sc.nextLine();
					System.out.println("enter the age");
					int age= sc.nextInt();
					System.out.println("enter the gender");
					char charAt = sc.next().charAt(0);
					String gen=String.valueOf(charAt);

					ps.setInt(1, id);
					ps.setString(2, name);
					ps.setInt(3, age);
					ps.setString(4, gen);

					int k = ps.executeUpdate();

					if(k>0)
					{
						System.out.println(k+" rows update");
					}
					else
					{
						System.out.println("0 rows update");
					}
					break;
				case 2:
					ResultSet rs = ps2.executeQuery();

					while(rs.next())
					{
						System.out.println(rs.getInt(1)+" "+rs.getString(2)+" "+rs.getInt(3)+" "+rs.getString(4));
					}
					break;
				case 3:
					System.exit(0);
					break;
				default:
					System.err.println("invalid input");
					break;
				}
			}
		}


	}

}
