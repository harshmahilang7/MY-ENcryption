
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
Display the area and perimeter  
*/

class PoneBlc 
{
	double length;
	double width;
	public void setDimensions(double length, double width)
	{
		this.length=length;
		this.width=width;
	}
	public double calculateArea()
	{
		return (length*width);
	}
	public double calculatePerimeter()
	{
		return (2*(length+width));
	}
	
	
}
