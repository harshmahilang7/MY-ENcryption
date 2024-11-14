//Program 01:
//
//Write a Program on OOPs to define a Product class with the following properties and behavior.
//
//Properties:
//
//productId : int
//productName : String
//productPrice : double
//
//Behavior:
//
//Define a method setProductData(int productId, String productName, double productPrice) : public void to initialize these properties directly using the this keyword.
//Define a method getProductInfo() : public void to display the properties.
//Use the Scanner class in ELC class to input values for productId, productName, and productPrice and initialize the properties using the setProductData method.
//
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
public class Blc {

	int productId;
	String productName;
	double productPrice;
	public void setProductData(int productId, String productName, double productPrice)
	{
		this.productId=productId;
		this.productName=productName;
		this.productPrice=productPrice;
	}
	public void getProductInfo() 
	{
		System.out.println("productId = "+productId);
		System.out.println("productName = "+productName);
		System.out.println("productPrice = "+productPrice);
	
	}
}
