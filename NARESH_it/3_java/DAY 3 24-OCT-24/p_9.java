/*Program 04:
-----------
Write a program to input the basic salary of a person. He gets 15% of the basic as HRA, 15% of the basic as Conveyance allowance and 10% of the basic as Entertainment allowance. The total salary is calculated by adding Basic + HRA + Conveyance + Entertainment Allowance. Calculate and print the total salary of person.
Take the Basic Salary from Command Line Argument*/
class p_9 
{
	public static void main(String[] args) 
	{
		float basicSalary=Integer.parseInt(args[0]);
		float hra=basicSalary/100*15;
		float conveyanceAllowance=basicSalary/100*15;
		float entertainmentAllowance=basicSalary/100*10;
		System.out.println("Total Salary is Basic + HRA + Conveyance + Entertainment Allowance"+(basicSalary+hra+conveyanceAllowance+entertainmentAllowance));
	}
}
