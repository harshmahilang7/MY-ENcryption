package day29q2;

public class ShapeCalculator {


//calculateArea(int sideLength): Returns the area of a square (side * side).

//calculateArea(int length, int width): Returns the area of a rectangle (length * width).

//calculateArea(double radius): Returns the area of a circle (p * radius^2).

	public int calculateArea(int sideLength)
	{
		if(sideLength<=0)
		{
			System.out.println("sideLength < =0");
			return 0;
		}
		else
			return sideLength*sideLength;
	}
	public int calculateArea(int length, int width)
	{
		if(length<=0||width<=0)
		{
			System.out.println("length < =0");
			return 0;
		}
		else
		return length*width;
	}
	public double calculateArea(double radius)
	{
		if(radius<=0)
		{
			System.out.println("radius < =0");
			return 0;
		}
		else
		{
		final double PI=3.14;
		return PI*radius*radius;
		}
	}

}
