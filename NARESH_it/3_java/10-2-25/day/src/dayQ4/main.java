package dayQ4;

public class main {

	public static void main(String[] args) {
		Vehicle v[]= new Vehicle[3];

		v[0]=new Car();
		v[1]=new Bike();
		v[2]=new Car();

		for (Vehicle vehicle : v) {
			callmethod(vehicle);
		}


	}


	public static void callmethod(Vehicle v)
	{
		v.run();
	}

}
