package test;

import com.exception.*;


//import com.exception;
public class CarTest {

	public CarTest() {

	}
	static void Stop(String one) throws CarStoppedException
	{
		if(one.equalsIgnoreCase("stop"))
		{

			throw new CarStoppedException("Car is Stop.");
		}

		else
		{
			System.out.println("Car not stall Stop");
		}
	}

	static void puncture(String one) throws CarPunctureException
	{
		if(one.equalsIgnoreCase("puncture"))
		{

			throw new CarPunctureException("Car is punctured.");
		}

		else
		{
			System.out.println("Car not stall puncture");
		}
	}


	static void carHeat(int temp) throws CarHeatException
	{
		if(temp>50)
		{

			throw new CarHeatException("Car is heated more the 50 degrees");

		}

		else
		{
			System.out.println("Car not stall heat");
		}
	}


}
