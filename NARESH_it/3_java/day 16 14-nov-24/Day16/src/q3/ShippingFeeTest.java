package q3;
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
public class ShippingFeeTest {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Package pkg=new Package();
		pkg.setPackageWeight(10);
		pkg.setShippingDistance(150);
		System.out.println(pkg.toString());
		ShippingFee obj2=ShippingFee.calculateFee(pkg);
		System.out.println(obj2.getFeeAmount());

	}

}
