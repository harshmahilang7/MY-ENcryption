package managing_employee_data;

import java.io.Serializable;

@SuppressWarnings("serial")
public class EmployeeBean implements Serializable
{
	public EmployeeBean()
	{}
	
	private int eid;
	private String name;
	private String email;
	private String dept;
	private double sal;
	
	public int getEid() {
		return eid;
	}
	public void setEid(int eid) {
		this.eid = eid;
	}
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public String getEmail() {
		return email;
	}
	public void setEmail(String email) 
	{
		
		this.email = email;
	}
	public String getDept() {
		return dept;
	}
	public void setDept(String dept) {
		this.dept = dept;
	}
	public double getSal() {
		return sal;
	}
	public void setSal(double sal) 
	{
		if(sal>0)
		{
			this.sal = sal;
		}
		else
		{
			this.sal=0;
		}
	}
	
	
	


	

}
