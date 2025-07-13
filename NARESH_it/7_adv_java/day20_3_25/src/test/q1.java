package test;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.Scanner;

//Program01::Write a jdbc program as follows:
//===========
//Table Name:Employee_Info.
//Table Columns:-empId,empName,empSalary,empAddress,empMailId,empPhNo.
//Note::-Using Batch Processing you have to execute following querries.
//       1.Insert data into Employee Table.
//       2.Update employee salary with the help of eid.
//       3.delete employee who is getting maximum salary.

//SQL> create table Employee_Info(empId number(10),empName varchar2(20),empSalary  number(7,2),empAddress  varchar2(20),empMailId varchar2(20),empPhNo number (10));
//
//Table created.
//
//SQL>

public class q1 
{
	public static void main(String[] args) throws ClassNotFoundException, SQLException 
	{
		Class.forName("oracle.jdbc.driver.OracleDriver");
		Connection conn= DriverManager.getConnection("jdbc:oracle:thin:@localhost:1521:xe","system","123");
//		PreparedStatement insert=conn.prepareStatement("insert into Employee_Info values(?,?,?,?,?,?)");
//		PreparedStatement updateSalary=conn.prepareStatement("update Employee_Info set empSalary=? where empId=?");
//		
//		PreparedStatement deleteQ=conn.prepareStatement("delete from Employee_Info where empsalary=(select max(empSalary) from Employee_info))");
//		
		
		Statement stm = conn.createStatement();
		
		Scanner sc= new Scanner(System.in);
		System.out.println("enter the Emp-id");
		Long empId=Long.parseLong(sc.nextLine());
		System.out.println("enter the Emp-name");
		String empName=sc.nextLine();
		System.out.println("enter the empSalary");
		Double empSalary=Double.parseDouble(sc.nextLine());
		System.out.println("enter the empAddress");
		String empAddress=sc.nextLine();
		System.out.println("enter the empMailId");
		String empMailId=sc.nextLine();
		System.out.println("enter the empPhNo");
		Long empPhNo=Long.parseLong(sc.nextLine());
		
		
		System.out.println("enter the Emp-id");
//		Long empId=Long.parseLong(sc.nextLine());
		System.out.println("enter the Emp-update-empSalary");
		Double updateempSalary=Double.parseDouble(sc.nextLine());
		
		stm.addBatch("insert into Employee_Info values("+empId+",'"+empName+"',"+empSalary+",'"+empAddress+"','"+empMailId+"',"+empPhNo+")");
		stm.addBatch("update Employee_Info set empSalary="+updateempSalary+" where empId="+empId);
		stm.addBatch("delete from Employee_Info where empsalary=(select max(empSalary) from Employee_info)");
		
		int[] k = stm.executeBatch();

		for(int i : k)
		{
			System.out.println("query executed : "+i);
		}//end of loop
		
		stm.clearBatch();
		
		
		
		
		
		
	}
	
	

}
