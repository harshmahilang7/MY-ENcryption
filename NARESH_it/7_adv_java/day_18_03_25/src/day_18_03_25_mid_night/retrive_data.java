package day_18_03_25_mid_night;

import java.sql.CallableStatement;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.Types;
import java.util.Scanner;

public class retrive_data 
{ 
	
//	create or replace procedure RetrieveEmployee72
//	(id varchar2,en OUT varchar2,ed OUT varchar2,hn OUT varchar2,
//	cty OUT varchar2,st OUT varchar2,pcode OUT number,md OUT varchar2,pno OUT number,
//	bs OUT number,h OUT number,d OUT number,ts OUT number) is
//	begin
//	   select ename,edesg into en,ed from EmpDate72 where eid=id;
//	   select hno,city,state,pincode into hn,cty,st,pcode from EmpAddress72 where eid=id;
//	   select mid,phno into md,pno from EmpContact72 where eid=id;
//	   select bsal,hra,da,totsal into bs,h,d,ts from EmpSalary72 where eid=id;
//	end;
//	/


	public static void main(String[] args) 
	{
		Scanner s = new Scanner(System.in);
        try(s;)
        {
      	  Class.forName("oracle.jdbc.driver.OracleDriver");
      	  Connection con = DriverManager.getConnection
      			  ("jdbc:oracle:thin:@localhost:1521:xe","system","123");
      	  CallableStatement cs= con.prepareCall("{call RetrieveEmployee72(?,?,?,?,?,?,?,?,?,?,?,?,?)}");
      	  
      	System.out.println("Enter the Emp-Id to retrieve details:");
    	String eId = s.nextLine();
    	cs.setString(1, eId);

    	cs.registerOutParameter(2, Types.VARCHAR);
    	cs.registerOutParameter(3, Types.VARCHAR);
    	cs.registerOutParameter(4, Types.VARCHAR);
    	cs.registerOutParameter(5, Types.VARCHAR);
    	cs.registerOutParameter(6, Types.VARCHAR);
    	cs.registerOutParameter(7, Types.INTEGER);
    	cs.registerOutParameter(8, Types.VARCHAR);
    	cs.registerOutParameter(9, Types.BIGINT);
    	cs.registerOutParameter(10, Types.INTEGER);
    	cs.registerOutParameter(11, Types.FLOAT);
    	cs.registerOutParameter(12, Types.FLOAT);
    	cs.registerOutParameter(13, Types.FLOAT);
    	cs.execute();
    	System.out.println("******Details******");
    	System.out.println("Emp-Id:"+eId);
    	System.out.println("Emp-Name:"+cs.getString(2));
    	System.out.println("Emp-Desg:"+cs.getString(3));
    	System.out.println("Emp-HNo:"+cs.getString(4));
    	System.out.println("Emp-City:"+cs.getString(5));
    	System.out.println("Emp-State:"+cs.getString(6));
    	System.out.println("Emp-PinCode:"+cs.getInt(7));
    	System.out.println("Emp-MailId:"+cs.getString(8));
    	System.out.println("Emp-PhoneNo:"+cs.getLong(9));
    	System.out.println("Emp-BSal:"+cs.getInt(10));
    	System.out.println("Emp-HRA:"+cs.getFloat(11));
    	System.out.println("Emp-DA:"+cs.getFloat(12));
    	System.out.println("Emp-TotSal:"+cs.getFloat(13));
    	con.close();

    	
    	
        }
        catch (Exception e) {
			e.printStackTrace();
		}
	}

}
