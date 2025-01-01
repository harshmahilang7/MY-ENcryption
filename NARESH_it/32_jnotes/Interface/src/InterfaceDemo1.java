//Programs using interface concept :

sealed interface Moveable permits Car
{
	int SPEED = 100;   //public  + static + final
	void move();       //public + abstract

}
final class Car implements Moveable

{
	@Override
	public void move() 
	{
		//SPEED = 120;	//Invalid
		System.out.println("Car speed is :"+SPEED);
	}	
}
public class InterfaceDemo1 
{
		public static void main(String[] args) 
		{
		    Moveable m = new Car();
		    m.move();
		    
		    System.out.println("Speed of the Car is :"+Moveable.SPEED);
	    }

}