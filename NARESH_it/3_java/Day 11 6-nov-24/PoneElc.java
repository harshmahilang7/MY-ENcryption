/*
Program -01
----------------
Using this Keyword to Initialize Parameters

Create a Rectangle class with the following specifications:

Attributes:

length (double)
width (double)

Methods:

void setDimensions(double length, double width): Uses the this keyword to set the length and width of the rectangle.
double calculateArea(): Returns the area of the rectangle (length × width).

double calculatePerimeter(): Returns the perimeter of the rectangle (2 × (length + width)).

Task:

Create a main method to:
Initialize a Rectangle object with specific dimensions.
Use setDimensions to set the dimensions.
Display the area and perimeter .
*/

class PoneElc 
{
	public static void main(String[] args) 
	{
		PoneBlc obj1=new PoneBlc();
		obj1.setDimensions(2,2);
		System.out.println(obj1.calculateArea());
		System.out.println(obj1.calculatePerimeter());
	}
}
