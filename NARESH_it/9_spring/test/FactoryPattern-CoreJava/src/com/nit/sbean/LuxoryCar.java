package com.nit.sbean;

public class LuxoryCar implements ICar {

	@Override
	public void assemble() {
		System.out.println("LuxoryCar.assemble()");

	}

	@Override
	public void testDrive() {
		System.out.println("LuxoryCar.testDrive()");

	}

	@Override
	public void deliver() {
		System.out.println("LuxoryCar.deliver()");

	}

	@Override
	public void drive() {
		System.out.println("LuxoryCar.drive()");

	}

}
