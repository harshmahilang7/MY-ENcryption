package composition;

public class CompositionDemo {

	public static void main(String[] args) 
	{
		
		Car car = new Car("Ford", 2024);
		System.out.println(car);
		
		Car car1 = new Car("audi", 2025);
		System.out.println(car1);
		

	}

}