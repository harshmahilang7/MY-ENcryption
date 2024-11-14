/*Program 02:
-----------
Write a Program on OOPs to define Employee class properties and behaviour.

properties :
employeeId : int
employeeName : String
employeeSalary : double

Initialize these properties with the help of Methods using Scanner class not by using Object reference.

behavior:
setEmployeeData() : public void
getEmployeeData() : public void*/
import java.util.Scanner;
class BlcProgramTwo 
{
	int employeeId;
	String employeeName;
	double employeeSalary;
	
	public void setEmployeeData()
	{
		Scanner sc=new Scanner(System.in);
		System.out.print("enter the Enployee ID");
		employeeId=sc.nextInt();
		System.out.print("enter the employee name ");
		employeeName=sc.next();
		System.out.print("enter the employee salary");
		employeeSalary=sc.nextDouble();
		//sc.close();
    }
    public void getEmployeeData()
	{
	 System.out.println("the Enployee ID"+employeeId);
	 System.out.println("the Enployee name"+employeeName);
	 System.out.println("the Enployee salary"+employeeSalary);
	}
}