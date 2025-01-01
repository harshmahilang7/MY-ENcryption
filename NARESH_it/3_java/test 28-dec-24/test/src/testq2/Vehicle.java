package testq2;

public abstract class Vehicle {

	private String vehicleType;
	private double baseRate;

	protected Vehicle(String vehicleType, double baseRate) {
		super();
		this.vehicleType = vehicleType;
		this.baseRate = baseRate;
	}

	protected String getVehicleType() {
		return vehicleType;
	}

	protected void setVehicleType(String vehicleType) {
		this.vehicleType = vehicleType;
	}

	protected double getBaseRate() {
		return baseRate;
	}

	protected void setBaseRate(double baseRate) {
		this.baseRate = baseRate;
	}


	protected void showDetails() {
		System.out.println("Vehicle Type :-"+vehicleType);
		System.out.println("Base Rate  :-Rs "+baseRate+"per hour");
	}

	abstract double calculateRentalCost(int hours);



}
