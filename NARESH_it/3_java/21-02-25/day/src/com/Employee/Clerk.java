package com.Employee;

public class Clerk extends Employee {
	int speed;
	int accuracy;
	static int i = 0;

	public int getSpeed() {
		return speed;
	}

	public void setSpeed(int speed) {
		i = i+1;
		this.speed = speed;
		if (i == 1) {
			if (speed > 70 && accuracy > 80) {
				addSalary();
			}
			else
				i--;

		}
	}

	public int getAccuracy() {
		return accuracy;
	}

	public void setAccuracy(int accuracy) {
		i = i+1;
		this.accuracy = accuracy;
		if (i == 1) {
			if (speed > 70 && accuracy > 80) {
				addSalary();
			}
			else
				i--;

		}
	}

	public Clerk(String name, int employeeId, double salary, int speed, int accuracy) {
		super(name, employeeId, salary);
		this.speed = speed;
		this.accuracy = accuracy;
	}

	public Clerk(String name, int employeeId, double salary) {
		super(name, employeeId, salary);
	}

	@Override
	public void setSalary(double salary) {
		i = i+1;
		if (i == 1) {
			if (speed > 70 && accuracy > 80) {
				super.setSalary(salary + 1000);
			}
			else
				i--;
		}
		super.setSalary(salary);
	}

}
