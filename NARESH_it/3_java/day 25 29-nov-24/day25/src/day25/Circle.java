package day25;

public class Circle {
	final double PI=3.14;
	double radius;

	public Circle() {
		super();
		// TODO Auto-generated constructor stub
	}

	public Circle(double radius) {
		super();
		if(radius<0)
		{
			System.err.println("Error Invalid Input");
		}
		else
		{

			this.radius = radius;
		}
	}

//	Method name: getArea
//
//	Return type: double
//
//	This method should return the area of the circle. Return -1 if radius is negative.

	double getArea()
	{
		if(radius<0)
		{
			return -1;
		}
		else
		{
			return PI*radius*radius;

		}
	}

}
