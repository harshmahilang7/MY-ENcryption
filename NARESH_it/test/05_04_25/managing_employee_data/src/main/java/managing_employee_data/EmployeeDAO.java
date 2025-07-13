package managing_employee_data;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.ArrayList;

public class EmployeeDAO 
{
//	•	saveEmployee(Employee e): Store in database (mock JDBC)
//	•	getAllEmployees(): Return list of employees
//	•	Use prepared statements
//	•	Handle SQL exceptions
	
//	SQL> create table emp2(id number(10),
//	name varchar(20),
//	email varchar2(30),
//	dept varchar2(20),
//	sal number(7,2));
//
//	Table created.
//
//	SQL>
	int k=0;
    
	public int saveEmployee(EmployeeBean e) 
	{
		Connection con = DBconnection.getCon();
		try {
			PreparedStatement insert = con.prepareStatement("insert into emp2 values(?,?,?,?,?)");
			insert.setInt(1,e.getEid());
			insert.setString(2,e.getName());
			insert.setString(3,e.getEmail());
			insert.setString(4,e.getDept());
			insert.setDouble(5,e.getSal());
			k = insert.executeUpdate();	
		} 
		catch (SQLException e1) 
		{
			e1.printStackTrace();
		}
		return k;
		
	}


	public ArrayList<EmployeeBean> getAllEmployees()
	{
		ArrayList<EmployeeBean> list=new ArrayList<EmployeeBean>();
		Connection con = DBconnection.getCon();
		try {
			PreparedStatement all = con.prepareStatement("select * from emp2");
			ResultSet rs = all.executeQuery();
			while (rs.next()) 
			{
				EmployeeBean eb= new EmployeeBean();
				eb.setEid(rs.getInt(1));
				eb.setName(rs.getString(2));
				eb.setEmail(rs.getString(3));
				eb.setDept(rs.getString(4));
				eb.setSal(rs.getDouble(5));
				list.add(eb);				
			}
		} 
		catch (SQLException e1) 
		{
			e1.printStackTrace();
		}
		return list;
	}

}
