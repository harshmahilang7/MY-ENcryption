package day_18_03_25_mid_night;

import java.sql.CallableStatement;
import java.sql.Connection;
import java.sql.DriverManager;
import java.util.Scanner;

import com.sun.tools.javac.Main;

//SQL> create table EmpDate72(eid number(10),ename varchar2(20), edesg varchar2(20));
//
//Table created.
//
//SQL> create table EmpAddress72(eid number(10) primary key,hno varchar2(20),city varchar2(20),state varchar2(20),pincode number(10));
//
//Table created.
//
//SQL> create table EmpContact72(eid number(10) primary key,mid varchar2(40),phno number(20));
//
//Table created.
//
//
//
//SQL> create table EmpSalary72(eid number(10) primary key,bsal number(20),hra number(10,2), da number (10,2),totsal numbe
//r(10,2));
//
//Table created.

//SQL>

//create or replace procedure InsertEmployee72
//(id varchar2,en varchar2,ed varchar2,hn varchar2,sn varchar2,cty varchar2,st varchar2,
//pcode number,md varchar2,pno number,bs number,h number,d number,ts number) is
//begin
// insert into EmpData72 values(id,en,ed);
// insert into EmpAddress72 values(id,hn,sn,cty,st,pcode);
// insert into EmpContact72 values(id,md,pno);
// insert into EmpSalary72 values(id,bs,h,d,ts);
//end;
///

//------------------
//create or replace procedure InsertEmployee72
//(id varchar2,en varchar2,ed varchar2,hn varchar2,cty varchar2,st varchar2,
//pcode number,md varchar2,pno number,bs number,h number,d number,ts number) is
//begin
// insert into EmpDate72 values(id,en,ed);
// insert into EmpAddress72 values(id,hn,cty,st,pcode);
// insert into EmpContact72 values(id,md,pno);
// insert into EmpSalary72 values(id,bs,h,d,ts);
//end;
///



public class set_data 
{
	public static void main(String[] args) 
	{
		Scanner s = new Scanner(System.in);
        try(s;)
        {
      	  Class.forName("oracle.jdbc.driver.OracleDriver");
      	  Connection con = DriverManager.getConnection
      			  ("jdbc:oracle:thin:@localhost:1521:xe","system","123");
      	  CallableStatement cs= con.prepareCall("{callInsertEmployee72(?,?,?,?,?,?,?,?,?,?,?,?,?)}");
    
    System.out.println("Enter the Emp-Id:");
	String eId = s.nextLine();
	System.out.println("Enter the Emp-Name:");
	String eName = s.nextLine();
	System.out.println("Enter the Emp-Desg:");
	String eDesg = s.nextLine();
	System.out.println("Enter the Emp-HNo:");
	String hNo = s.nextLine();
	System.out.println("Enter the Emp-City:");
	String city = s.nextLine();
	System.out.println("Enter the Emp-State:");
	String state = s.nextLine();
	System.out.println("Enter the Emp-PinCode:");
	int pinCode = Integer.parseInt(s.nextLine());
	System.out.println("Enter the Emp-MailId:");
	String mId = s.nextLine();
	System.out.println("Enter the Emp-PhNo:");
	long phNo = s.nextLong();
	System.out.println("Enter the Emp-bSal:");
	int bSal = s.nextInt();
	
	float hra = 0.93F*bSal;
	float da = 0.61F*bSal;
	float totSal = bSal+hra+da;
	
	cs.setString(1, eId);
	cs.setString(2, eName);
	cs.setString(3, eDesg);
	cs.setString(4, hNo);
	cs.setString(5, city);
	cs.setString(6, state);
	cs.setInt(7, pinCode);
	cs.setString(8, mId);
	cs.setLong(9, phNo);
	cs.setInt(10, bSal);
	cs.setFloat(11, hra);
	cs.setFloat(12, da);
	cs.setFloat(13, totSal);
	cs.execute();

	System.out.println("Employee added Successsfully....");
	


        }
        catch (Exception e) 
        {
        	
			e.printStackTrace();
		}

		
	}

}
