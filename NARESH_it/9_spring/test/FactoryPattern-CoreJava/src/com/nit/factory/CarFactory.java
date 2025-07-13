package com.nit.factory;

import com.nit.sbean.ICar;
import com.nit.sbean.LuxoryCar;
import com.nit.sbean.OffRoadingCar;

public class CarFactory 
{
	public static ICar getInstance(String carType)
	{
		ICar car= null;
		if(carType.equalsIgnoreCase("luxory"))
			car= new LuxoryCar();
		else if(carType.equalsIgnoreCase("Offroad"))
			car= new OffRoadingCar();
		
		car.assemble();
		car.testDrive();
		car.deliver();
		return car;
		
	}
	

}
