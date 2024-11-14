/*

Que 2 :
=======
Write a Java program to calculate the total surface area of a cylinder.
Formula : 2 * pi * r square + 2 * pi * r * h 

where:

r is the radius of the cylinder's base,
h is the height of the cylinder,
pi is approximately 3.14.

Sample Input : 
Enter the radius of the cylinder: 5
Enter the height of the cylinder: 10

Sample Output :
The total surface area of the cylinder is: 471.0

===========================
*/
import java.util.Scanner;
class ProgramTwo
{
	public static void main(String[] args) 
	{
		System.out.print("enter the radius of cylinder : ");
		Scanner sc=new Scanner(System.in);
		double radius=sc.nextDouble();
		System.out.print("enter the hight of the cylinder : ");
		double height=sc.nextDouble();
		final double PI=3.14;
		double totalsurfaceareaofcylinder=2*PI*(radius*radius)+2*PI*radius*height;
		System.out.printf("The total surface area of the cylinder is: %.1f\n",totalsurfaceareaofcylinder);
	}
}
