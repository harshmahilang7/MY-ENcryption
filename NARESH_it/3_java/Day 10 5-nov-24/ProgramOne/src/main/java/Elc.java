
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
public class Elc {

	public static void main(String[] args) {
		Blc obj1=new Blc();
		obj1.setProductData(1, "book", 27.01);
		obj1.getProductInfo();

	}

}
