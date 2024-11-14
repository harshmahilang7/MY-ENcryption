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
class ElcProgramTwo 
{
	public static void main(String[] args) 
	{
		BlcProgramTwo obj1= new BlcProgramTwo();
		obj1.setEmployeeData();
		obj1.getEmployeeData();
		
		BlcProgramTwo obj2= new BlcProgramTwo();
		obj2.setEmployeeData();
		obj2.getEmployeeData();
	}
}
