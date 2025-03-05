package com.Employee;

public class Manager extends Employee {
	private ManagerType mType;

	public ManagerType getmType() {
		return mType;
	}

	public void setmType(ManagerType mType) {
		this.mType = mType;
	}


	public Manager(String name, int employeeId, double salary, ManagerType mType) {
		super(name, employeeId, salary);
		this.mType = mType;
	}



	public Manager(String name, int employeeId, double salary) {
		super(name, employeeId, salary);
	}

	@Override
	public void setSalary(double salary) {
		if(mType.name()=="HR")
		{
			super.setSalary(salary+10000);
		}
		if(mType.name()=="SALES")
		{
			super.setSalary(salary+5000);
		}
	}



}
