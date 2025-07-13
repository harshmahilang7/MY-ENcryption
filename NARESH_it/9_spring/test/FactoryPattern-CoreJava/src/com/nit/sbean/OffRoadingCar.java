package com.nit.sbean;

public class OffRoadingCar implements ICar{

	@Override
	public void assemble() {
		System.out.println("OffRoadingCar.assemble()");
		
	}

	@Override
	public void testDrive() {
		System.out.println("OffRoadingCar.testDrive()");
		
	}

	@Override
	public void deliver() {
		System.out.println("OffRoadingCar.deliver()");
		
	}

	@Override
	public void drive() {
		System.out.println("OffRoadingCar.drive()");
		
	}
	

}
