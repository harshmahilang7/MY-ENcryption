package test;

import com.exception.*;

public class CarUser {

public static void main(String[] args)
{
	try
	{
			CarTest.Stop("stop");
			CarTest.puncture("puncture");
			CarTest.carHeat(50);
	}
	catch (CarStoppedException | CarPunctureException | CarHeatException e)
	{
			e.printStackTrace();
	}

}
}
