package day25;

public class Cylinder extends Circle {
	double height;

	public Cylinder() {
		super();
	}



	public Cylinder(double radius, double height) {
		super(radius);
		if(height<0)
		{
			System.err.println("Error Invalid Input");
		}
		else
		{
			this.height = height;
		}

	}



//4. Create below methods,
//
//Method name: getVolume
//
//Return type: double
//
//This method should return the volume of the cylinder. Return -1 if height is negative.

	double getVolume()
	{
		if(radius<0)
		{
			return -1;
		}
		else
		{
			return getArea()*height;

		}
	}

}
