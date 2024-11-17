package q3;
//Ques - 3
//-------------
//Shipping Fee Calculation Based on Package Weight and Distance
//Classes:
//Package (BLC):
//
//Attributes (all private):
//packageWeight (double) - The weight of the package in kilograms.
//shippingDistance (int) - The distance the package needs to be shipped in kilometers.
//
//Methods:
//setPackageWeight(double weight): void - Sets the package weight.
//setShippingDistance(int distance): void - Sets the shipping distance.
//getPackageWeight(): double - Returns the package weight.
//getShippingDistance(): int - Returns the shipping distance.
//displayPackageDetails(): void - Displays the package's weight and shipping distance.
//
//ShippingFee (BLC):
//Attributes (all private):
//feeAmount (double) - The calculated shipping fee.
//
//Methods:
//getFeeAmount(): double - Returns the fee amount.
//calculateFee(Package pkg): ShippingFee - A static method that takes a Package object as a parameter and returns a ShippingFee object. The fee is calculated based on the packageWeight and shippingDistance.
//
//Logic:
//If packageWeight ≤ 5kg:
//Distance ≤ 100km: Fee = 5
//Distance > 100km: Fee = 10
//If packageWeight > 5kg but ≤ 20kg:
//Distance ≤ 100km: Fee = 10
//Distance > 100km: Fee = 20
//If packageWeight > 20kg:
//Distance ≤ 100km: Fee = 20
//Distance > 100km: Fee = 40
//
//ShippingFeeTest (ELC):
//In the main method:
//Create an instance of the Package class.
//Set the package weight and shipping distance using setter methods.
//Call the displayPackageDetails() method to display the package’s details.
//Call the calculateFee(Package pkg) method and print the fee amount.
//
//Example:
//Package: Weight = 10kg, Distance = 150km
//Shipping Fee: 20
public class Package {
	double packageWeight;
	int shippingDistance;
	
	public double getPackageWeight() {
		return packageWeight;
	}
	public void setPackageWeight(double packageWeight) {
		this.packageWeight = packageWeight;
	}
	public int getShippingDistance() {
		return shippingDistance;
	}
	public void setShippingDistance(int shippingDistance) {
		this.shippingDistance = shippingDistance;
	}
	@Override
	public String toString() {
		return "Package [packageWeight=" + packageWeight + ", shippingDistance=" + shippingDistance + "]";
	}
	
	

}
